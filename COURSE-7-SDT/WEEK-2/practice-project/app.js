const loadAllProduct = () =>{
    fetch("https://fakestoreapi.com/products")
    .then((res) => res.json())
    .then((data) => {
        // console.log(data)
        displayProduct(data);
    } )
};





const displayProduct = (products) => {
    const productContainer = document.getElementById("product-container");

    products.forEach(product => {
        const div = document.createElement("div");
        div.classList.add("card");


        div.innerHTML = `
        
        <img class="card-image" src="${product.image}" alt="" />
        <h5>${product.id}</h5>
        <h3>${product.title.slice(0,50)}</h3>
        <p>${product.description.slice(0,100)}</p>
        <button > Details </button> 
        <button onclick="handleAddToCart('${product.title}, ${product.price}')"> Add to cart </button>

        `;

        productContainer.appendChild(div);
    });
};



const handleAddToCart = (name,price) => {
    console.log(name, price);
};






loadAllProduct();