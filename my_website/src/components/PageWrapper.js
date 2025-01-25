import React from 'react';
import {Component} from 'react';
import {Link} from 'react-router-dom';


class PageWrapper extends Component {
    render(){
        return (
            <div>
                <nav className="navbar navbar-expand-lg navbar-dark fixed-top" id="mainNav">
                    <div className="container">
                        <link className="navbar-brand" to="/"><img src="assets/img/navbar-logo.svg" alt="..." /></link>
                        <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="/navbarResponsive" aria-controls="navbarResponsive" aria-expanded="false" aria-label="Toggle navigation">
                            Menu
                            <i className="fas fa-bars ms-1"></i>
                        </button>
                        <div className="collapse navbar-collapse" id="navbarResponsive">
                            <ul className="navbar-nav text-uppercase ms-auto py-4 py-lg-0">
                                <li className="nav-item"><link className="nav-link" to="/services">Services</link></li>
                                <li className="nav-item"><link className="nav-link" to="/portfolio">Portfolio</link></li>
                                <li className="nav-item"><link className="nav-link" to="/about">About</link></li>
                                <li className="nav-item"><link className="nav-link" to="/team">Team</link></li>
                                <li className="nav-item"><link className="nav-link" to="/contact">Contact</link></li>
                            </ul>
                        </div>
                    </div>
                </nav>
                {/* 'this' revers to the PageWrapper component, and calls to its properties*/}
                {/*'children refers to any element called by PageWreapper. The children can be viewed in the 'Apps.js' file and appear within the <PageWrapper> tag*/}
                {this.props.children}
            </div>
        )
    }
}

export default PageWrapper;