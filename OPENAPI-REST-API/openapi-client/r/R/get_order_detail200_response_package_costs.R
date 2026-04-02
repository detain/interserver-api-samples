#' Create a new GetOrderDetail200ResponsePackageCosts
#'
#' @description
#' GetOrderDetail200ResponsePackageCosts Class
#'
#' @docType class
#' @title GetOrderDetail200ResponsePackageCosts
#' @description GetOrderDetail200ResponsePackageCosts Class
#' @format An \code{R6Class} generator object
#' @field package_id  numeric [optional]
#' @field package_cost  numeric [optional]
#' @field currency  character [optional]
#' @field currencySymbol  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetOrderDetail200ResponsePackageCosts <- R6::R6Class(
  "GetOrderDetail200ResponsePackageCosts",
  public = list(
    `package_id` = NULL,
    `package_cost` = NULL,
    `currency` = NULL,
    `currencySymbol` = NULL,

    #' @description
    #' Initialize a new GetOrderDetail200ResponsePackageCosts class.
    #'
    #' @param package_id package_id
    #' @param package_cost package_cost
    #' @param currency currency
    #' @param currencySymbol currencySymbol
    #' @param ... Other optional arguments.
    initialize = function(`package_id` = NULL, `package_cost` = NULL, `currency` = NULL, `currencySymbol` = NULL, ...) {
      if (!is.null(`package_id`)) {
        self$`package_id` <- `package_id`
      }
      if (!is.null(`package_cost`)) {
        self$`package_cost` <- `package_cost`
      }
      if (!is.null(`currency`)) {
        if (!(is.character(`currency`) && length(`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", `currency`))
        }
        self$`currency` <- `currency`
      }
      if (!is.null(`currencySymbol`)) {
        if (!(is.character(`currencySymbol`) && length(`currencySymbol`) == 1)) {
          stop(paste("Error! Invalid data for `currencySymbol`. Must be a string:", `currencySymbol`))
        }
        self$`currencySymbol` <- `currencySymbol`
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
    #' @return GetOrderDetail200ResponsePackageCosts as a base R list.
    #' @examples
    #' # convert array of GetOrderDetail200ResponsePackageCosts (x) to a data frame
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
    #' Convert GetOrderDetail200ResponsePackageCosts to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetOrderDetail200ResponsePackageCostsObject <- list()
      if (!is.null(self$`package_id`)) {
        GetOrderDetail200ResponsePackageCostsObject[["package_id"]] <-
          self$`package_id`
      }
      if (!is.null(self$`package_cost`)) {
        GetOrderDetail200ResponsePackageCostsObject[["package_cost"]] <-
          self$`package_cost`
      }
      if (!is.null(self$`currency`)) {
        GetOrderDetail200ResponsePackageCostsObject[["currency"]] <-
          self$`currency`
      }
      if (!is.null(self$`currencySymbol`)) {
        GetOrderDetail200ResponsePackageCostsObject[["currencySymbol"]] <-
          self$`currencySymbol`
      }
      return(GetOrderDetail200ResponsePackageCostsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponsePackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponsePackageCosts
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`package_id`)) {
        self$`package_id` <- this_object$`package_id`
      }
      if (!is.null(this_object$`package_cost`)) {
        self$`package_cost` <- this_object$`package_cost`
      }
      if (!is.null(this_object$`currency`)) {
        self$`currency` <- this_object$`currency`
      }
      if (!is.null(this_object$`currencySymbol`)) {
        self$`currencySymbol` <- this_object$`currencySymbol`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetOrderDetail200ResponsePackageCosts in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetOrderDetail200ResponsePackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetOrderDetail200ResponsePackageCosts
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`package_id` <- this_object$`package_id`
      self$`package_cost` <- this_object$`package_cost`
      self$`currency` <- this_object$`currency`
      self$`currencySymbol` <- this_object$`currencySymbol`
      self
    },

    #' @description
    #' Validate JSON input with respect to GetOrderDetail200ResponsePackageCosts and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetOrderDetail200ResponsePackageCosts
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
# GetOrderDetail200ResponsePackageCosts$unlock()
#
## Below is an example to define the print function
# GetOrderDetail200ResponsePackageCosts$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetOrderDetail200ResponsePackageCosts$lock()

