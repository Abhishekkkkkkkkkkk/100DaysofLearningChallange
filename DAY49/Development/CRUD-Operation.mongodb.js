// CRUD OPERATION 

use ("CDUDDB")

db.createCollection("Courses")


// Create 

// db.courses.insertOne({
//     name: "Into to C++",
//     description: "Learn the basics of C++",
//     duration: 30,
//     price: 100,
//     category: "Programming"
// })

// db.courses.insertMany([
//     {
//         "name": "Intro to C++",
//         "description": "Learn the basics of C++",
//         "duration": 30,
//         "price": 100,
//         "category": "Programming"
//     },
//     {
//         "name": "Advanced Java",
//         "description": "Deep dive into Java programming",
//         "duration": 45,
//         "price": 150,
//         "category": "Programming"
//     },
//     {
//         "name": "Python for Data Science",
//         "description": "Utilize Python for data analysis and visualization",
//         "duration": 50,
//         "price": 200,
//         "category": "Data Science"
//     },
//     {
//         "name": "Web Development with HTML & CSS",
//         "description": "Build responsive websites with HTML and CSS",
//         "duration": 25,
//         "price": 80,
//         "category": "Web Development"
//     },
//     {
//         "name": "Introduction to Machine Learning",
//         "description": "Understand the basics of machine learning algorithms",
//         "duration": 60,
//         "price": 250,
//         "category": "Artificial Intelligence"
//     },
//     {
//         "name": "Database Management with SQL",
//         "description": "Learn to manage databases using SQL",
//         "duration": 35,
//         "price": 120,
//         "category": "Database"
//     },
//     {
//         "name": "Cybersecurity Fundamentals",
//         "description": "Protect systems and networks from cyber threats",
//         "duration": 40,
//         "price": 180,
//         "category": "Security"
//     },
//     {
//         "name": "Mobile App Development with Kotlin",
//         "description": "Create Android apps using Kotlin",
//         "duration": 55,
//         "price": 220,
//         "category": "Mobile Development"
//     },
//     {
//         "name": "Project Management Basics",
//         "description": "Learn the fundamentals of project management",
//         "duration": 20,
//         "price": 70,
//         "category": "Management"
//     },
//     {
//         "name": "UI/UX Design Principles",
//         "description": "Design user-friendly and aesthetic interfaces",
//         "duration": 30,
//         "price": 130,
//         "category": "Design"
//     }
// ])

// Read 

// let a = db.courses.find({price: 80})

// console.log(a.count())
// console.log(a.toArray())


// let b = db.courses.findOne({price: 80})
// console.log(b)



// Update 

// db.courses.updateOne({price: 80}, {$set :{price: 100}})

// db.courses.updateMany({price: 100}, {$set :{price: 1000}})



// Delete 

// db.courses.deleteOne({price: 80})

db.courses.deleteMany({price: 1000})