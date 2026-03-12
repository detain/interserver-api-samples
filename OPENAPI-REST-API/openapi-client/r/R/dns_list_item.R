#' Create a new DnsListItem
#'
#' @description
#' A DNS zone entry with its ID, domain name, and record content.
#'
#' @docType class
#' @title DnsListItem
#' @description DnsListItem Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field name  character [optional]
#' @field content  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DnsListItem <- R6::R6Class(
  "DnsListItem",
  public = list(
    `id` = NULL,
    `name` = NULL,
    `content` = NULL,

    #' @description
    #' Initialize a new DnsListItem class.
    #'
    #' @param id id
    #' @param name name
    #' @param content content
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `name` = NULL, `content` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`content`)) {
        if (!(is.character(`content`) && length(`content`) == 1)) {
          stop(paste("Error! Invalid data for `content`. Must be a string:", `content`))
        }
        self$`content` <- `content`
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
    #' @return DnsListItem as a base R list.
    #' @examples
    #' # convert array of DnsListItem (x) to a data frame
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
    #' Convert DnsListItem to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DnsListItemObject <- list()
      if (!is.null(self$`id`)) {
        DnsListItemObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`name`)) {
        DnsListItemObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`content`)) {
        DnsListItemObject[["content"]] <-
          self$`content`
      }
      return(DnsListItemObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsListItem
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsListItem
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`content`)) {
        self$`content` <- this_object$`content`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DnsListItem in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsListItem
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsListItem
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`name` <- this_object$`name`
      self$`content` <- this_object$`content`
      self
    },

    #' @description
    #' Validate JSON input with respect to DnsListItem and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DnsListItem
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
# DnsListItem$unlock()
#
## Below is an example to define the print function
# DnsListItem$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DnsListItem$lock()

