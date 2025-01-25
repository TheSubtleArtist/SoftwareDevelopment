import PageWrapper from './components/PageWrapper';
import {Component} from 'react';
import React from 'react';
import Home from './components/pages/Home'
import {BrowserRouter as Router, Route, Link} from 'react-router-dom';

class App extends Component {
  render (){
    return (
      <div>
        <Router>
          <PageWrapper>
              <Route
                path="/"
                component={Home} />
            <h2>Some HTML to show relationships.</h2>
          </PageWrapper>
        </Router>
          <h2>html to show relationships</h2>
      </div>
    )
  }
}

export default App;
