import React from 'react'
import Script from 'next/script'

const contact = () => {
  return (
    <div>
      <Script>
        {`alert("Welcome to Contact Page");`}
      </Script>
      <h1>I am Contact</h1>
    </div>
  )
}

export default contact
