export default function Page({params}) {
    // throw new Error("Error Occured")
    // Fetch Your Blog Post by its Slug 
    let Languages = ["CPP", "Python", "Javascript", "HTML", "CSS"]
    if(Languages.includes(params.slug)){
        return <div>My Post: {params.slug}</div>
    }
    else{
        return <div>Sorry, this post does not exist</div>
    }
    return <div>My Post: {params.slug}</div>
}