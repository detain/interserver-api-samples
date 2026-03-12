#' Create a new QuickserverOrderServerDetails381
#'
#' @description
#' QuickserverOrderServerDetails381 Class
#'
#' @docType class
#' @title QuickserverOrderServerDetails381
#' @description QuickserverOrderServerDetails381 Class
#' @format An \code{R6Class} generator object
#' @field cpu CPU details of the server. character [optional]
#' @field ram RAM capacity of the server. character [optional]
#' @field hd Hard disk capacity of the server. character [optional]
#' @field cores Number of CPU cores. integer [optional]
#' @field cost Cost of the server. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderServerDetails381 <- R6::R6Class(
  "QuickserverOrderServerDetails381",
  public = list(
    `cpu` = NULL,
    `ram` = NULL,
    `hd` = NULL,
    `cores` = NULL,
    `cost` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderServerDetails381 class.
    #'
    #' @param cpu CPU details of the server.
    #' @param ram RAM capacity of the server.
    #' @param hd Hard disk capacity of the server.
    #' @param cores Number of CPU cores.
    #' @param cost Cost of the server.
    #' @param ... Other optional arguments.
    initialize = function(`cpu` = NULL, `ram` = NULL, `hd` = NULL, `cores` = NULL, `cost` = NULL, ...) {
      if (!is.null(`cpu`)) {
        if (!(is.character(`cpu`) && length(`cpu`) == 1)) {
          stop(paste("Error! Invalid data for `cpu`. Must be a string:", `cpu`))
        }
        self$`cpu` <- `cpu`
      }
      if (!is.null(`ram`)) {
        if (!(is.character(`ram`) && length(`ram`) == 1)) {
          stop(paste("Error! Invalid data for `ram`. Must be a string:", `ram`))
        }
        self$`ram` <- `ram`
      }
      if (!is.null(`hd`)) {
        if (!(is.character(`hd`) && length(`hd`) == 1)) {
          stop(paste("Error! Invalid data for `hd`. Must be a string:", `hd`))
        }
        self$`hd` <- `hd`
      }
      if (!is.null(`cores`)) {
        if (!(is.numeric(`cores`) && length(`cores`) == 1)) {
          stop(paste("Error! Invalid data for `cores`. Must be an integer:", `cores`))
        }
        self$`cores` <- `cores`
      }
      if (!is.null(`cost`)) {
        if (!(is.character(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a string:", `cost`))
        }
        self$`cost` <- `cost`
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
    #' @return QuickserverOrderServerDetails381 as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderServerDetails381 (x) to a data frame
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
    #' Convert QuickserverOrderServerDetails381 to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderServerDetails381Object <- list()
      if (!is.null(self$`cpu`)) {
        QuickserverOrderServerDetails381Object[["cpu"]] <-
          self$`cpu`
      }
      if (!is.null(self$`ram`)) {
        QuickserverOrderServerDetails381Object[["ram"]] <-
          self$`ram`
      }
      if (!is.null(self$`hd`)) {
        QuickserverOrderServerDetails381Object[["hd"]] <-
          self$`hd`
      }
      if (!is.null(self$`cores`)) {
        QuickserverOrderServerDetails381Object[["cores"]] <-
          self$`cores`
      }
      if (!is.null(self$`cost`)) {
        QuickserverOrderServerDetails381Object[["cost"]] <-
          self$`cost`
      }
      return(QuickserverOrderServerDetails381Object)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderServerDetails381
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderServerDetails381
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`cpu`)) {
        self$`cpu` <- this_object$`cpu`
      }
      if (!is.null(this_object$`ram`)) {
        self$`ram` <- this_object$`ram`
      }
      if (!is.null(this_object$`hd`)) {
        self$`hd` <- this_object$`hd`
      }
      if (!is.null(this_object$`cores`)) {
        self$`cores` <- this_object$`cores`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderServerDetails381 in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderServerDetails381
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderServerDetails381
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`cpu` <- this_object$`cpu`
      self$`ram` <- this_object$`ram`
      self$`hd` <- this_object$`hd`
      self$`cores` <- this_object$`cores`
      self$`cost` <- this_object$`cost`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderServerDetails381 and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderServerDetails381
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
# QuickserverOrderServerDetails381$unlock()
#
## Below is an example to define the print function
# QuickserverOrderServerDetails381$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderServerDetails381$lock()

