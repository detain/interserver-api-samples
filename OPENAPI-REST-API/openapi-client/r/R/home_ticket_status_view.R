#' Create a new HomeTicketStatusView
#'
#' @description
#' Ticket statuses with view numbers.
#'
#' @docType class
#' @title HomeTicketStatusView
#' @description HomeTicketStatusView Class
#' @format An \code{R6Class} generator object
#' @field 4 Status corresponding to view number 4. character [optional]
#' @field 5 Status corresponding to view number 5. character [optional]
#' @field 6 Status corresponding to view number 6. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeTicketStatusView <- R6::R6Class(
  "HomeTicketStatusView",
  public = list(
    `4` = NULL,
    `5` = NULL,
    `6` = NULL,

    #' @description
    #' Initialize a new HomeTicketStatusView class.
    #'
    #' @param 4 Status corresponding to view number 4.
    #' @param 5 Status corresponding to view number 5.
    #' @param 6 Status corresponding to view number 6.
    #' @param ... Other optional arguments.
    initialize = function(`4` = NULL, `5` = NULL, `6` = NULL, ...) {
      if (!is.null(`4`)) {
        if (!(is.character(`4`) && length(`4`) == 1)) {
          stop(paste("Error! Invalid data for `4`. Must be a string:", `4`))
        }
        self$`4` <- `4`
      }
      if (!is.null(`5`)) {
        if (!(is.character(`5`) && length(`5`) == 1)) {
          stop(paste("Error! Invalid data for `5`. Must be a string:", `5`))
        }
        self$`5` <- `5`
      }
      if (!is.null(`6`)) {
        if (!(is.character(`6`) && length(`6`) == 1)) {
          stop(paste("Error! Invalid data for `6`. Must be a string:", `6`))
        }
        self$`6` <- `6`
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
    #' @return HomeTicketStatusView as a base R list.
    #' @examples
    #' # convert array of HomeTicketStatusView (x) to a data frame
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
    #' Convert HomeTicketStatusView to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeTicketStatusViewObject <- list()
      if (!is.null(self$`4`)) {
        HomeTicketStatusViewObject[["4"]] <-
          self$`4`
      }
      if (!is.null(self$`5`)) {
        HomeTicketStatusViewObject[["5"]] <-
          self$`5`
      }
      if (!is.null(self$`6`)) {
        HomeTicketStatusViewObject[["6"]] <-
          self$`6`
      }
      return(HomeTicketStatusViewObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeTicketStatusView
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeTicketStatusView
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`4`)) {
        self$`4` <- this_object$`4`
      }
      if (!is.null(this_object$`5`)) {
        self$`5` <- this_object$`5`
      }
      if (!is.null(this_object$`6`)) {
        self$`6` <- this_object$`6`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeTicketStatusView in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeTicketStatusView
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeTicketStatusView
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`4` <- this_object$`4`
      self$`5` <- this_object$`5`
      self$`6` <- this_object$`6`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeTicketStatusView and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeTicketStatusView
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
# HomeTicketStatusView$unlock()
#
## Below is an example to define the print function
# HomeTicketStatusView$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeTicketStatusView$lock()

