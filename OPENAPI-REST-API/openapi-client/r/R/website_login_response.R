#' Create a new WebsiteLoginResponse
#'
#' @description
#' Response from a website login request.
#'
#' @docType class
#' @title WebsiteLoginResponse
#' @description WebsiteLoginResponse Class
#' @format An \code{R6Class} generator object
#' @field type  character [optional]
#' @field location  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteLoginResponse <- R6::R6Class(
  "WebsiteLoginResponse",
  public = list(
    `type` = NULL,
    `location` = NULL,

    #' @description
    #' Initialize a new WebsiteLoginResponse class.
    #'
    #' @param type type
    #' @param location location
    #' @param ... Other optional arguments.
    initialize = function(`type` = NULL, `location` = NULL, ...) {
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`location`)) {
        if (!(is.character(`location`) && length(`location`) == 1)) {
          stop(paste("Error! Invalid data for `location`. Must be a string:", `location`))
        }
        self$`location` <- `location`
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
    #' @return WebsiteLoginResponse as a base R list.
    #' @examples
    #' # convert array of WebsiteLoginResponse (x) to a data frame
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
    #' Convert WebsiteLoginResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteLoginResponseObject <- list()
      if (!is.null(self$`type`)) {
        WebsiteLoginResponseObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`location`)) {
        WebsiteLoginResponseObject[["location"]] <-
          self$`location`
      }
      return(WebsiteLoginResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteLoginResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteLoginResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`location`)) {
        self$`location` <- this_object$`location`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteLoginResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteLoginResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteLoginResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`type` <- this_object$`type`
      self$`location` <- this_object$`location`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteLoginResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteLoginResponse
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
# WebsiteLoginResponse$unlock()
#
## Below is an example to define the print function
# WebsiteLoginResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteLoginResponse$lock()

