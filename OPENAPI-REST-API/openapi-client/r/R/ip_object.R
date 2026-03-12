#' Create a new IpObject
#'
#' @description
#' IP Address
#'
#' @docType class
#' @title IpObject
#' @description IpObject Class
#' @format An \code{R6Class} generator object
#' @field ip IP Address character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
IpObject <- R6::R6Class(
  "IpObject",
  public = list(
    `ip` = NULL,

    #' @description
    #' Initialize a new IpObject class.
    #'
    #' @param ip IP Address
    #' @param ... Other optional arguments.
    initialize = function(`ip`, ...) {
      if (!missing(`ip`)) {
        if (!(is.character(`ip`) && length(`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", `ip`))
        }
        self$`ip` <- `ip`
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
    #' @return IpObject as a base R list.
    #' @examples
    #' # convert array of IpObject (x) to a data frame
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
    #' Convert IpObject to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      IpObjectObject <- list()
      if (!is.null(self$`ip`)) {
        IpObjectObject[["ip"]] <-
          self$`ip`
      }
      return(IpObjectObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of IpObject
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpObject
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ip`)) {
        self$`ip` <- this_object$`ip`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return IpObject in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of IpObject
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpObject
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ip` <- this_object$`ip`
      self
    },

    #' @description
    #' Validate JSON input with respect to IpObject and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `ip`
      if (!is.null(input_json$`ip`)) {
        if (!(is.character(input_json$`ip`) && length(input_json$`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", input_json$`ip`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for IpObject: the required field `ip` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of IpObject
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
        invalid_fields["ip"] <- "Non-nullable required field `ip` cannot be null."
      }

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
# IpObject$unlock()
#
## Below is an example to define the print function
# IpObject$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# IpObject$lock()

