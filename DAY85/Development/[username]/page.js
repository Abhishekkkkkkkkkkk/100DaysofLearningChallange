import React from 'react'

const Username = ({params}) => {
  return (
    <>
    <div className='cover w-full relative'>
      <img className='object-cover  h-[400px]' src="https://c10.patreonusercontent.com/4/patreon-media/p/campaign/4842667/452146dcfeb04f38853368f554aadde1/eyJ3IjoxNjAwLCJ3ZSI6MX0%3D/16.gif?token-time=1725408000&token-hash=Zp1HvMNgvW03TpeETEXcdvjW5ZSWMLeoeBewTXUIa14%3D" alt="cover-image" />

      <div className='absolute -bottom-16 right-[47%]'>
        <img className='rounded-full' width={100} height={100} src="https://c10.patreonusercontent.com/4/patreon-media/p/campaign/4842667/aa52624d1cef47ba91c357da4a7859cf/eyJoIjoxMDgwLCJ3IjoxMDgwfQ%3D%3D/4.gif?token-time=1726012800&token-hash=pb2VfDFI76mjO5dj9DJ7ZfoMv_nDiwdRiHkRcZOHjCI%3D" alt="profile-pic" />
      </div>
    </div>

    <div className="info flex justify-center items-center my-16 mb-32 flex-col gap-2">
      <div className='font-bold text-lg'>
        @{params.username}
      </div>
      <div className='text-slate-400'>
      Creating Animated art for VTT's
      </div>
      <div className='text-slate-400'>
      13,426 members . 87 Posts . $17,710/release
      </div>

      <div className="payment flex gap-3 w-[80%] mt-12">
        <div className="supporter w-1/2 bg-slate-900 rounded-lg text-white p-10">
        <h2 className='text-2xl font-bold my-5'>Supporters</h2>
        <ul className='mx-5 text-lg'>
          <li className='my-4 flex gap-2 items-center'>
            <img className='bg-slate-800 rounded-full' width={33} src='avatar.gif' alt='user-avatar' />
            <span>
              Abhishek Donated <span className='font-bold'>$30</span> with a message "I support You Bro Lots of ❤"
            </span>
          </li>
          <li className='my-4 flex gap-2 items-center'>
            <img className='bg-slate-800 rounded-full' width={33} src='avatar.gif' alt='user-avatar' />
            <span>
              Abhishek Donated <span className='font-bold'>$30</span> with a message "I support You Bro Lots of ❤"
            </span>
          </li>
          <li className='my-4 flex gap-2 items-center'>
            <img className='bg-slate-800 rounded-full' width={33} src='avatar.gif' alt='user-avatar' />
            <span>
              Abhishek Donated <span className='font-bold'>$30</span> with a message "I support You Bro Lots of ❤"
            </span>
          </li>
          <li className='my-4 flex gap-2 items-center'>
            <img className='bg-slate-800 rounded-full' width={33} src='avatar.gif' alt='user-avatar' />
            <span>
              Abhishek Donated <span className='font-bold'>$30</span> with a message "I support You Bro Lots of ❤"
            </span>
          </li>
          <li className='my-4 flex gap-2 items-center'>
            <img className='bg-slate-800 rounded-full' width={33} src='avatar.gif' alt='user-avatar' />
            <span>
              Abhishek Donated <span className='font-bold'>$30</span> with a message "I support You Bro Lots of ❤"
            </span>
          </li>
        </ul>
        </div>
        <div className="makepayment w-1/2 bg-slate-900 rounded-lg text-white p-10">
        <h2 className='text-2xl font-bold my-5'>Make a Payment</h2>
        <div className='flex gap-2 flex-col'>
          {/* input for name message and amount  */}
          <input type="text" className='w-full p-3 rounded-lg bg-slate-800' placeholder='Enter Name' />
          <input type="text" className='w-full p-3 rounded-lg bg-slate-800' placeholder='Enter Message' />
          <input type="text" className='w-full p-3 rounded-lg bg-slate-800' placeholder='Enter Amount' />
          <button className='bg-orange-500 hover:bg-orange-700 text-white font-bold py-3 rounded-lg'>Donate</button>
        </div>
        {/* Or choose from these Amount  */}
        <div className='flex gap-2 mt-5'>
          <button className='bg-slate-800 p-3 rounded-lg'>Donate $10</button>
          <button className='bg-slate-800 p-3 rounded-lg'>Donate $30</button>
          <button className='bg-slate-800 p-3 rounded-lg'>Donate $50</button>
        </div>

        </div>
      </div>
    </div>
    </>
  )
}

export default Username
