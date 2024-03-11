console.log("script initialized");

function addcard(thumbnailURL, title, channel_name, views) {
    let cont = document.querySelector(".container");
    cont.insertAdjacentHTML("afterend", `
        <div class="card">
            <div class="thumb"> 
                <img src=${thumbnailURL} alt="thumb">
            </div>
            <div class="content">
                <p class="title">${title}</p>
                <p class="ChannelName">${channel_name}</p>
                <p class="views">${views}</p>
            </div>
        </div>
    `);
}


addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )

addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )
addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )
addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )
addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )
addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )
addcard("https://i.ytimg.com/vi/pVjdMQ_iAh0/hqdefault.jpg?sqp=-oaymwEcCNACELwBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYNxx_MtSWzeKc3F7yhX9PzBsj8g", "night lovell", "GANGSTER GANG", "73M views"   )



