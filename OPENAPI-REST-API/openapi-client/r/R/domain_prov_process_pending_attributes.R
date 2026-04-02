#' Create a new DomainProvProcessPendingAttributes
#'
#' @description
#' DomainProvProcessPendingAttributes Class
#'
#' @docType class
#' @title DomainProvProcessPendingAttributes
#' @description DomainProvProcessPendingAttributes Class
#' @format An \code{R6Class} generator object
#' @field id  character [optional]
#' @field order_id  character [optional]
#' @field registration expiration date  character [optional]
#' @field f_auto_renew  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainProvProcessPendingAttributes <- R6::R6Class(
  "DomainProvProcessPendingAttributes",
  public = list(
    `id` = NULL,
    `order_id` = NULL,
    `registration expiration date` = NULL,
    `f_auto_renew` = NULL,

    #' @description
    #' Initialize a new DomainProvProcessPendingAttributes class.
    #'
    #' @param id id
    #' @param order_id order_id
    #' @param registration expiration date registration expiration date
    #' @param f_auto_renew f_auto_renew
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `order_id` = NULL, `registration expiration date` = NULL, `f_auto_renew` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`order_id`)) {
        if (!(is.character(`order_id`) && length(`order_id`) == 1)) {
          stop(paste("Error! Invalid data for `order_id`. Must be a string:", `order_id`))
        }
        self$`order_id` <- `order_id`
      }
      if (!is.null(`registration expiration date`)) {
        if (!(is.character(`registration expiration date`) && length(`registration expiration date`) == 1)) {
          stop(paste("Error! Invalid data for `registration expiration date`. Must be a string:", `registration expiration date`))
        }
        self$`registration expiration date` <- `registration expiration date`
      }
      if (!is.null(`f_auto_renew`)) {
        if (!(is.character(`f_auto_renew`) && length(`f_auto_renew`) == 1)) {
          stop(paste("Error! Invalid data for `f_auto_renew`. Must be a string:", `f_auto_renew`))
        }
        self$`f_auto_renew` <- `f_auto_renew`
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
    #' @return DomainProvProcessPendingAttributes as a base R list.
    #' @examples
    #' # convert array of DomainProvProcessPendingAttributes (x) to a data frame
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
    #' Convert DomainProvProcessPendingAttributes to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainProvProcessPendingAttributesObject <- list()
      if (!is.null(self$`id`)) {
        DomainProvProcessPendingAttributesObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`order_id`)) {
        DomainProvProcessPendingAttributesObject[["order_id"]] <-
          self$`order_id`
      }
      if (!is.null(self$`registration expiration date`)) {
        DomainProvProcessPendingAttributesObject[["registration expiration date"]] <-
          self$`registration expiration date`
      }
      if (!is.null(self$`f_auto_renew`)) {
        DomainProvProcessPendingAttributesObject[["f_auto_renew"]] <-
          self$`f_auto_renew`
      }
      return(DomainProvProcessPendingAttributesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainProvProcessPendingAttributes
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainProvProcessPendingAttributes
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`order_id`)) {
        self$`order_id` <- this_object$`order_id`
      }
      if (!is.null(this_object$`registration expiration date`)) {
        self$`registration expiration date` <- this_object$`registration expiration date`
      }
      if (!is.null(this_object$`f_auto_renew`)) {
        self$`f_auto_renew` <- this_object$`f_auto_renew`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainProvProcessPendingAttributes in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainProvProcessPendingAttributes
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainProvProcessPendingAttributes
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`order_id` <- this_object$`order_id`
      self$`registration expiration date` <- this_object$`registration expiration date`
      self$`f_auto_renew` <- this_object$`f_auto_renew`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainProvProcessPendingAttributes and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainProvProcessPendingAttributes
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
# DomainProvProcessPendingAttributes$unlock()
#
## Below is an example to define the print function
# DomainProvProcessPendingAttributes$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainProvProcessPendingAttributes$lock()

