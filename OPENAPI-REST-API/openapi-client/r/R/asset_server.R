#' Create a new AssetServer
#'
#' @description
#' A pre-configured asset server available for immediate provisioning.
#'
#' @docType class
#' @title AssetServer
#' @description AssetServer Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field Region  character [optional]
#' @field price  character [optional]
#' @field CPU  list(\link{AssetServerCPUInner}) [optional]
#' @field Memory  list(\link{AssetServerCPUInner}) [optional]
#' @field Bandwidth  list(\link{AssetServerCPUInner}) [optional]
#' @field IPs  list(\link{AssetServerCPUInner}) [optional]
#' @field HD  named list(character) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AssetServer <- R6::R6Class(
  "AssetServer",
  public = list(
    `id` = NULL,
    `Region` = NULL,
    `price` = NULL,
    `CPU` = NULL,
    `Memory` = NULL,
    `Bandwidth` = NULL,
    `IPs` = NULL,
    `HD` = NULL,

    #' @description
    #' Initialize a new AssetServer class.
    #'
    #' @param id id
    #' @param Region Region
    #' @param price price
    #' @param CPU CPU
    #' @param Memory Memory
    #' @param Bandwidth Bandwidth
    #' @param IPs IPs
    #' @param HD HD
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `Region` = NULL, `price` = NULL, `CPU` = NULL, `Memory` = NULL, `Bandwidth` = NULL, `IPs` = NULL, `HD` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`Region`)) {
        if (!(is.character(`Region`) && length(`Region`) == 1)) {
          stop(paste("Error! Invalid data for `Region`. Must be a string:", `Region`))
        }
        self$`Region` <- `Region`
      }
      if (!is.null(`price`)) {
        if (!(is.character(`price`) && length(`price`) == 1)) {
          stop(paste("Error! Invalid data for `price`. Must be a string:", `price`))
        }
        self$`price` <- `price`
      }
      if (!is.null(`CPU`)) {
        stopifnot(is.vector(`CPU`), length(`CPU`) != 0)
        sapply(`CPU`, function(x) stopifnot(R6::is.R6(x)))
        self$`CPU` <- `CPU`
      }
      if (!is.null(`Memory`)) {
        stopifnot(is.vector(`Memory`), length(`Memory`) != 0)
        sapply(`Memory`, function(x) stopifnot(R6::is.R6(x)))
        self$`Memory` <- `Memory`
      }
      if (!is.null(`Bandwidth`)) {
        stopifnot(is.vector(`Bandwidth`), length(`Bandwidth`) != 0)
        sapply(`Bandwidth`, function(x) stopifnot(R6::is.R6(x)))
        self$`Bandwidth` <- `Bandwidth`
      }
      if (!is.null(`IPs`)) {
        stopifnot(is.vector(`IPs`), length(`IPs`) != 0)
        sapply(`IPs`, function(x) stopifnot(R6::is.R6(x)))
        self$`IPs` <- `IPs`
      }
      if (!is.null(`HD`)) {
        stopifnot(is.vector(`HD`), length(`HD`) != 0)
        sapply(`HD`, function(x) stopifnot(is.character(x)))
        self$`HD` <- `HD`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return AssetServer as a base R list.
    #' @examples
    #' # convert array of AssetServer (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert AssetServer to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AssetServerObject <- list()
      if (!is.null(self$`id`)) {
        AssetServerObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`Region`)) {
        AssetServerObject[["Region"]] <-
          self$`Region`
      }
      if (!is.null(self$`price`)) {
        AssetServerObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`CPU`)) {
        AssetServerObject[["CPU"]] <-
          self$extractSimpleType(self$`CPU`)
      }
      if (!is.null(self$`Memory`)) {
        AssetServerObject[["Memory"]] <-
          self$extractSimpleType(self$`Memory`)
      }
      if (!is.null(self$`Bandwidth`)) {
        AssetServerObject[["Bandwidth"]] <-
          self$extractSimpleType(self$`Bandwidth`)
      }
      if (!is.null(self$`IPs`)) {
        AssetServerObject[["IPs"]] <-
          self$extractSimpleType(self$`IPs`)
      }
      if (!is.null(self$`HD`)) {
        AssetServerObject[["HD"]] <-
          self$`HD`
      }
      return(AssetServerObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of AssetServer
    #'
    #' @param input_json the JSON input
    #' @return the instance of AssetServer
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`Region`)) {
        self$`Region` <- this_object$`Region`
      }
      if (!is.null(this_object$`price`)) {
        self$`price` <- this_object$`price`
      }
      if (!is.null(this_object$`CPU`)) {
        self$`CPU` <- ApiClient$new()$deserializeObj(this_object$`CPU`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`Memory`)) {
        self$`Memory` <- ApiClient$new()$deserializeObj(this_object$`Memory`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`Bandwidth`)) {
        self$`Bandwidth` <- ApiClient$new()$deserializeObj(this_object$`Bandwidth`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`IPs`)) {
        self$`IPs` <- ApiClient$new()$deserializeObj(this_object$`IPs`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`HD`)) {
        self$`HD` <- ApiClient$new()$deserializeObj(this_object$`HD`, "map(character)", loadNamespace("openapi"))
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AssetServer in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AssetServer
    #'
    #' @param input_json the JSON input
    #' @return the instance of AssetServer
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`Region` <- this_object$`Region`
      self$`price` <- this_object$`price`
      self$`CPU` <- ApiClient$new()$deserializeObj(this_object$`CPU`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      self$`Memory` <- ApiClient$new()$deserializeObj(this_object$`Memory`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      self$`Bandwidth` <- ApiClient$new()$deserializeObj(this_object$`Bandwidth`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      self$`IPs` <- ApiClient$new()$deserializeObj(this_object$`IPs`, "array[AssetServerCPUInner]", loadNamespace("openapi"))
      self$`HD` <- ApiClient$new()$deserializeObj(this_object$`HD`, "map(character)", loadNamespace("openapi"))
      self
    },

    #' @description
    #' Validate JSON input with respect to AssetServer and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AssetServer
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# AssetServer$unlock()
#
## Below is an example to define the print function
# AssetServer$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AssetServer$lock()

