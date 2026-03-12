#' Create a new PostOauthCallbackRequest
#'
#' @description
#' PostOauthCallbackRequest Class
#'
#' @docType class
#' @title PostOauthCallbackRequest
#' @description PostOauthCallbackRequest Class
#' @format An \code{R6Class} generator object
#' @field provider The OAuth provider name (e.g. `Google`). character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PostOauthCallbackRequest <- R6::R6Class(
  "PostOauthCallbackRequest",
  public = list(
    `provider` = NULL,

    #' @description
    #' Initialize a new PostOauthCallbackRequest class.
    #'
    #' @param provider The OAuth provider name (e.g. `Google`).
    #' @param ... Other optional arguments.
    initialize = function(`provider` = NULL, ...) {
      if (!is.null(`provider`)) {
        if (!(is.character(`provider`) && length(`provider`) == 1)) {
          stop(paste("Error! Invalid data for `provider`. Must be a string:", `provider`))
        }
        self$`provider` <- `provider`
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
    #' @return PostOauthCallbackRequest as a base R list.
    #' @examples
    #' # convert array of PostOauthCallbackRequest (x) to a data frame
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
    #' Convert PostOauthCallbackRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PostOauthCallbackRequestObject <- list()
      if (!is.null(self$`provider`)) {
        PostOauthCallbackRequestObject[["provider"]] <-
          self$`provider`
      }
      return(PostOauthCallbackRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PostOauthCallbackRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostOauthCallbackRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`provider`)) {
        self$`provider` <- this_object$`provider`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PostOauthCallbackRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PostOauthCallbackRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostOauthCallbackRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`provider` <- this_object$`provider`
      self
    },

    #' @description
    #' Validate JSON input with respect to PostOauthCallbackRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PostOauthCallbackRequest
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
# PostOauthCallbackRequest$unlock()
#
## Below is an example to define the print function
# PostOauthCallbackRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PostOauthCallbackRequest$lock()

