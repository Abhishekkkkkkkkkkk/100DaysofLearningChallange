import React from 'react'
import "./Card.css"

const Card = (props) => {
  return (
    <div className='card'>
      <h1>{props.title}</h1>
      <p>{props.description}</p>
      <img src="https://images.unsplash.com/photo-1461988320302-91bde64fc8e4?ixid=2yJhcHBfaWQiOjEyMDd9" alt="crypto" width={350} height={100} />


    </div>
  )
}

export default Card
