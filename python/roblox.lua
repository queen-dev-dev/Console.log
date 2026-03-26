console = {sigma = true}
console.__index = console

function console.log(message)
  print(message)
end

console.log("sigma")
