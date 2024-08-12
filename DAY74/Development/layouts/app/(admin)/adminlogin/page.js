import React from 'react'

const page = () => {
  return (
    <div>
      Admin Login Page
    </div>
  )
}

export default page


// or Dynamic metadata
export async function generateMetadata({ params }) {
  return {
    title: 'Admin Login Metadata',
  }
}
