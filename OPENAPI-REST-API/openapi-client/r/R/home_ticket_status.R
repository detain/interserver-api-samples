#' Create a new HomeTicketStatus
#'
#' @description
#' Ticket statuses.
#'
#' @docType class
#' @title HomeTicketStatus
#' @description HomeTicketStatus Class
#' @format An \code{R6Class} generator object
#' @field Open Count of open tickets. integer [optional]
#' @field On Hold Count of tickets on hold. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
HomeTicketStatus <- R6::R6Class(
  "HomeTicketStatus",
  public = list(
    `Open` = NULL,
    `On Hold` = NULL,

    #' @description
    #' Initialize a new HomeTicketStatus class.
    #'
    #' @param Open Count of open tickets.
    #' @param On Hold Count of tickets on hold.
    #' @param ... Other optional arguments.
    initialize = function(`Open` = NULL, `On Hold` = NULL, ...) {
      if (!is.null(`Open`)) {
        if (!(is.numeric(`Open`) && length(`Open`) == 1)) {
          stop(paste("Error! Invalid data for `Open`. Must be an integer:", `Open`))
        }
        self$`Open` <- `Open`
      }
      if (!is.null(`On Hold`)) {
        if (!(is.numeric(`On Hold`) && length(`On Hold`) == 1)) {
          stop(paste("Error! Invalid data for `On Hold`. Must be an integer:", `On Hold`))
        }
        self$`On Hold` <- `On Hold`
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
    #' @return HomeTicketStatus as a base R list.
    #' @examples
    #' # convert array of HomeTicketStatus (x) to a data frame
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
    #' Convert HomeTicketStatus to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      HomeTicketStatusObject <- list()
      if (!is.null(self$`Open`)) {
        HomeTicketStatusObject[["Open"]] <-
          self$`Open`
      }
      if (!is.null(self$`On Hold`)) {
        HomeTicketStatusObject[["On Hold"]] <-
          self$`On Hold`
      }
      return(HomeTicketStatusObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeTicketStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeTicketStatus
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Open`)) {
        self$`Open` <- this_object$`Open`
      }
      if (!is.null(this_object$`On Hold`)) {
        self$`On Hold` <- this_object$`On Hold`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return HomeTicketStatus in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of HomeTicketStatus
    #'
    #' @param input_json the JSON input
    #' @return the instance of HomeTicketStatus
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`Open` <- this_object$`Open`
      self$`On Hold` <- this_object$`On Hold`
      self
    },

    #' @description
    #' Validate JSON input with respect to HomeTicketStatus and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of HomeTicketStatus
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
# HomeTicketStatus$unlock()
#
## Below is an example to define the print function
# HomeTicketStatus$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# HomeTicketStatus$lock()

