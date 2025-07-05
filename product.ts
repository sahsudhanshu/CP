interface Product {
    id: number;
    name: string;
    price: number;
    category?: string;
}

const product1: Product = {
    id: 1,
    name: "Laptop",
    price: 45000,
    category: 'electronics'
};

const product2: Product = {
    id: 2,
    name: "Smartphone",
    price: 12000,
};

function print(product: Product) {
    for (const [key, value] of Object.entries(product)) {
        console.log(`${key}: ${value}`);
    }
}

print(product1);
print(product2);
