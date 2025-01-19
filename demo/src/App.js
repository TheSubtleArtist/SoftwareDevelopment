import logo from './logo.svg';
import React from 'react';
import {Component} from 'react';
import './App.css';
import HighScore from './HighScore';

class App extends Component {
  constructor(props){
    super(props);

    this.state ={
      count:0
    }
  }

  handleClick = () => {
    //alert('Clicked')
    this.setState({count: this.state.count + 1});
  }

  // Some deprecated components that still work
/*
  componentWillMount(props, state){
      console.log("componentWillMount Executed");
  }

  componentDidMount(props, state){
    console.log("consoleDidMount with", this.props, this.state);
  }

  componentWillReceiveProps(props){
    console.log("componentWillReceiveProps executed");
  }

  componentWillUpdate(props,state){
    if(this.props.name !==props.name){
      console.log("something wrong with componentWillUpdate");
    }
  }
*/
  componentDidUpdate(props, state){

    console.log("Updated from ", state, " to ", this.state);
    if(this.state.count > 10 && this.state.count !== state.count && ! this.state.overTen){
      this.setState({overTen: true});
    }
  }

  resetCount = (e) => {
    this.setState({
      count: 0,
      overTen: false
    })
  }


  render(){
    let name='Nicky!'
    let count = this.state.count;

    return (
      <div className="App">
        <header className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
          <p>
            Edit <code>src/App.js</code> and save to reload.
          </p>
            Learn React
            <h1>Hello World!</h1>
            <h2>Hello {name}</h2>
            <h2>You Clicked the Button {count} times.</h2>
            <HighScore 
              overTen={this.state.overTen}
              onReset={this.resetCount}
            />
            <span><button onClick={(e) => this.handleClick()}>Click Me</button> </span>
        </header>
      </div>
    )
  }


}


/*
function App() {
  let name = "Nicky";
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
          <h1>Hello World!</h1>
          <h2>Hello {name}</h2>

          
        </a>
      </header>
    </div>
  );
}
*/
export default App;
