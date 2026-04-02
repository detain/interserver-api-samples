#' Create a new PostWebsiteBuyIp200Response
#'
#' @description
#' PostWebsiteBuyIp200Response Class
#'
#' @docType class
#' @title PostWebsiteBuyIp200Response
#' @description PostWebsiteBuyIp200Response Class
#' @format An \code{R6Class} generator object
#' @field message  character [optional]
#' @field success  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PostWebsiteBuyIp200Response <- R6::R6Class(
  "PostWebsiteBuyIp200Response",
  public = list(
    `message` = NULL,
    `success` = NULL,

    #' @description
    #' Initialize a new PostWebsiteBuyIp200Response class.
    #'
    #' @param message message
    #' @param success success
    #' @param ... Other optional arguments.
    initialize = function(`message` = NULL, `success` = NULL, ...) {
      if (!is.null(`message`)) {
        if (!(is.character(`message`) && length(`message`) == 1)) {
          stop(paste("Error! Invalid data for `message`. Must be a string:", `message`))
        }
        self$`message` <- `message`
      }
      if (!is.null(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
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
    #' @return PostWebsiteBuyIp200Response as a base R list.
    #' @examples
    #' # convert array of PostWebsiteBuyIp200Response (x) to a data frame
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
    #' Convert PostWebsiteBuyIp200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PostWebsiteBuyIp200ResponseObject <- list()
      if (!is.null(self$`message`)) {
        PostWebsiteBuyIp200ResponseObject[["message"]] <-
          self$`message`
      }
      if (!is.null(self$`success`)) {
        PostWebsiteBuyIp200ResponseObject[["success"]] <-
          self$`success`
      }
      return(PostWebsiteBuyIp200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteBuyIp200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteBuyIp200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`message`)) {
        self$`message` <- this_object$`message`
      }
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PostWebsiteBuyIp200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteBuyIp200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteBuyIp200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`message` <- this_object$`message`
      self$`success` <- this_object$`success`
      self
    },

    #' @description
    #' Validate JSON input with respect to PostWebsiteBuyIp200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PostWebsiteBuyIp200Response
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
# PostWebsiteBuyIp200Response$unlock()
#
## Below is an example to define the print function
# PostWebsiteBuyIp200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PostWebsiteBuyIp200Response$lock()

