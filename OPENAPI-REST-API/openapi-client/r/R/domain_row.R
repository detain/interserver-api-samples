#' Create a new DomainRow
#'
#' @description
#' A result row from the `Domains` `GET` request.
#'
#' @docType class
#' @title DomainRow
#' @description DomainRow Class
#' @format An \code{R6Class} generator object
#' @field domain_id The ID number of the domain in our billing system. character [optional]
#' @field domain_hostname The hostname of the domain. character [optional]
#' @field domain_expire_date The expiration date of the domain. character [optional]
#' @field cost The cost of the domain. character [optional]
#' @field domain_status The billing / registration status of the domain. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainRow <- R6::R6Class(
  "DomainRow",
  public = list(
    `domain_id` = NULL,
    `domain_hostname` = NULL,
    `domain_expire_date` = NULL,
    `cost` = NULL,
    `domain_status` = NULL,

    #' @description
    #' Initialize a new DomainRow class.
    #'
    #' @param domain_id The ID number of the domain in our billing system.
    #' @param domain_hostname The hostname of the domain.
    #' @param domain_expire_date The expiration date of the domain.
    #' @param cost The cost of the domain.
    #' @param domain_status The billing / registration status of the domain.
    #' @param ... Other optional arguments.
    initialize = function(`domain_id` = NULL, `domain_hostname` = NULL, `domain_expire_date` = NULL, `cost` = NULL, `domain_status` = NULL, ...) {
      if (!is.null(`domain_id`)) {
        if (!(is.character(`domain_id`) && length(`domain_id`) == 1)) {
          stop(paste("Error! Invalid data for `domain_id`. Must be a string:", `domain_id`))
        }
        self$`domain_id` <- `domain_id`
      }
      if (!is.null(`domain_hostname`)) {
        if (!(is.character(`domain_hostname`) && length(`domain_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `domain_hostname`. Must be a string:", `domain_hostname`))
        }
        self$`domain_hostname` <- `domain_hostname`
      }
      if (!is.null(`domain_expire_date`)) {
        if (!(is.character(`domain_expire_date`) && length(`domain_expire_date`) == 1)) {
          stop(paste("Error! Invalid data for `domain_expire_date`. Must be a string:", `domain_expire_date`))
        }
        self$`domain_expire_date` <- `domain_expire_date`
      }
      if (!is.null(`cost`)) {
        if (!(is.character(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a string:", `cost`))
        }
        self$`cost` <- `cost`
      }
      if (!is.null(`domain_status`)) {
        if (!(is.character(`domain_status`) && length(`domain_status`) == 1)) {
          stop(paste("Error! Invalid data for `domain_status`. Must be a string:", `domain_status`))
        }
        self$`domain_status` <- `domain_status`
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
    #' @return DomainRow as a base R list.
    #' @examples
    #' # convert array of DomainRow (x) to a data frame
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
    #' Convert DomainRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainRowObject <- list()
      if (!is.null(self$`domain_id`)) {
        DomainRowObject[["domain_id"]] <-
          self$`domain_id`
      }
      if (!is.null(self$`domain_hostname`)) {
        DomainRowObject[["domain_hostname"]] <-
          self$`domain_hostname`
      }
      if (!is.null(self$`domain_expire_date`)) {
        DomainRowObject[["domain_expire_date"]] <-
          self$`domain_expire_date`
      }
      if (!is.null(self$`cost`)) {
        DomainRowObject[["cost"]] <-
          self$`cost`
      }
      if (!is.null(self$`domain_status`)) {
        DomainRowObject[["domain_status"]] <-
          self$`domain_status`
      }
      return(DomainRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`domain_id`)) {
        self$`domain_id` <- this_object$`domain_id`
      }
      if (!is.null(this_object$`domain_hostname`)) {
        self$`domain_hostname` <- this_object$`domain_hostname`
      }
      if (!is.null(this_object$`domain_expire_date`)) {
        self$`domain_expire_date` <- this_object$`domain_expire_date`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      if (!is.null(this_object$`domain_status`)) {
        self$`domain_status` <- this_object$`domain_status`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`domain_id` <- this_object$`domain_id`
      self$`domain_hostname` <- this_object$`domain_hostname`
      self$`domain_expire_date` <- this_object$`domain_expire_date`
      self$`cost` <- this_object$`cost`
      self$`domain_status` <- this_object$`domain_status`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainRow
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
# DomainRow$unlock()
#
## Below is an example to define the print function
# DomainRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainRow$lock()

