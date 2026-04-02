#' Create a new DeleteGeoFirewallRule
#'
#' @description
#' Delete geo firewall rule for your scrub ip
#'
#' @docType class
#' @title DeleteGeoFirewallRule
#' @description DeleteGeoFirewallRule Class
#' @format An \code{R6Class} generator object
#' @field rule_id  integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DeleteGeoFirewallRule <- R6::R6Class(
  "DeleteGeoFirewallRule",
  public = list(
    `rule_id` = NULL,

    #' @description
    #' Initialize a new DeleteGeoFirewallRule class.
    #'
    #' @param rule_id rule_id
    #' @param ... Other optional arguments.
    initialize = function(`rule_id`, ...) {
      if (!missing(`rule_id`)) {
        if (!(is.numeric(`rule_id`) && length(`rule_id`) == 1)) {
          stop(paste("Error! Invalid data for `rule_id`. Must be an integer:", `rule_id`))
        }
        self$`rule_id` <- `rule_id`
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
    #' @return DeleteGeoFirewallRule as a base R list.
    #' @examples
    #' # convert array of DeleteGeoFirewallRule (x) to a data frame
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
    #' Convert DeleteGeoFirewallRule to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DeleteGeoFirewallRuleObject <- list()
      if (!is.null(self$`rule_id`)) {
        DeleteGeoFirewallRuleObject[["rule_id"]] <-
          self$`rule_id`
      }
      return(DeleteGeoFirewallRuleObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DeleteGeoFirewallRule
    #'
    #' @param input_json the JSON input
    #' @return the instance of DeleteGeoFirewallRule
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`rule_id`)) {
        self$`rule_id` <- this_object$`rule_id`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DeleteGeoFirewallRule in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DeleteGeoFirewallRule
    #'
    #' @param input_json the JSON input
    #' @return the instance of DeleteGeoFirewallRule
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`rule_id` <- this_object$`rule_id`
      self
    },

    #' @description
    #' Validate JSON input with respect to DeleteGeoFirewallRule and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `rule_id`
      if (!is.null(input_json$`rule_id`)) {
        if (!(is.numeric(input_json$`rule_id`) && length(input_json$`rule_id`) == 1)) {
          stop(paste("Error! Invalid data for `rule_id`. Must be an integer:", input_json$`rule_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DeleteGeoFirewallRule: the required field `rule_id` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DeleteGeoFirewallRule
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `rule_id` is null
      if (is.null(self$`rule_id`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `rule_id` is null
      if (is.null(self$`rule_id`)) {
        invalid_fields["rule_id"] <- "Non-nullable required field `rule_id` cannot be null."
      }

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
# DeleteGeoFirewallRule$unlock()
#
## Below is an example to define the print function
# DeleteGeoFirewallRule$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DeleteGeoFirewallRule$lock()

