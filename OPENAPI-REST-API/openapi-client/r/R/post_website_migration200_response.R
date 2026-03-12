#' Create a new PostWebsiteMigration200Response
#'
#' @description
#' PostWebsiteMigration200Response Class
#'
#' @docType class
#' @title PostWebsiteMigration200Response
#' @description PostWebsiteMigration200Response Class
#' @format An \code{R6Class} generator object
#' @field text Confirmation message. character [optional]
#' @field ticket The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PostWebsiteMigration200Response <- R6::R6Class(
  "PostWebsiteMigration200Response",
  public = list(
    `text` = NULL,
    `ticket` = NULL,

    #' @description
    #' Initialize a new PostWebsiteMigration200Response class.
    #'
    #' @param text Confirmation message.
    #' @param ticket The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
    #' @param ... Other optional arguments.
    initialize = function(`text` = NULL, `ticket` = NULL, ...) {
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!is.null(`ticket`)) {
        if (!(is.numeric(`ticket`) && length(`ticket`) == 1)) {
          stop(paste("Error! Invalid data for `ticket`. Must be an integer:", `ticket`))
        }
        self$`ticket` <- `ticket`
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
    #' @return PostWebsiteMigration200Response as a base R list.
    #' @examples
    #' # convert array of PostWebsiteMigration200Response (x) to a data frame
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
    #' Convert PostWebsiteMigration200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PostWebsiteMigration200ResponseObject <- list()
      if (!is.null(self$`text`)) {
        PostWebsiteMigration200ResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`ticket`)) {
        PostWebsiteMigration200ResponseObject[["ticket"]] <-
          self$`ticket`
      }
      return(PostWebsiteMigration200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteMigration200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteMigration200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`ticket`)) {
        self$`ticket` <- this_object$`ticket`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PostWebsiteMigration200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteMigration200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteMigration200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`text` <- this_object$`text`
      self$`ticket` <- this_object$`ticket`
      self
    },

    #' @description
    #' Validate JSON input with respect to PostWebsiteMigration200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PostWebsiteMigration200Response
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
# PostWebsiteMigration200Response$unlock()
#
## Below is an example to define the print function
# PostWebsiteMigration200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PostWebsiteMigration200Response$lock()

