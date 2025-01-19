import React from 'react';
import {Component} from 'react';

class HighScore extends Component{

    render(){
            if(this.props.overTen){
                return (
                    <h3> You Beat high score of 10 <p>
                        <button onClick={this.props.onReset}>Reset</button></p>
                    </h3>
                )
            }
            else{
                return null;
            }
    }
}

export default HighScore;