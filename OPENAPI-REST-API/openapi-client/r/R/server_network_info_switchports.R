#' Create a new ServerNetworkInfoSwitchports
#'
#' @description
#' Object containing switchport information.
#'
#' @docType class
#' @title ServerNetworkInfoSwitchports
#' @description ServerNetworkInfoSwitchports Class
#' @format An \code{R6Class} generator object
#' @field 10414  \link{ServerSwitchport}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerNetworkInfoSwitchports <- R6::R6Class(
  "ServerNetworkInfoSwitchports",
  public = list(
    `10414` = NULL,

    #' @description
    #' Initialize a new ServerNetworkInfoSwitchports class.
    #'
    #' @param 10414 10414
    #' @param ... Other optional arguments.
    initialize = function(`10414`, ...) {
      if (!missing(`10414`)) {
        stopifnot(R6::is.R6(`10414`))
        self$`10414` <- `10414`
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
    #' @return ServerNetworkInfoSwitchports as a base R list.
    #' @examples
    #' # convert array of ServerNetworkInfoSwitchports (x) to a data frame
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
    #' Convert ServerNetworkInfoSwitchports to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerNetworkInfoSwitchportsObject <- list()
      if (!is.null(self$`10414`)) {
        ServerNetworkInfoSwitchportsObject[["10414"]] <-
          self$extractSimpleType(self$`10414`)
      }
      return(ServerNetworkInfoSwitchportsObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerNetworkInfoSwitchports
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerNetworkInfoSwitchports
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`10414`)) {
        `10414_object` <- ServerSwitchport$new()
        `10414_object`$fromJSON(jsonlite::toJSON(this_object$`10414`, auto_unbox = TRUE, digits = NA))
        self$`10414` <- `10414_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerNetworkInfoSwitchports in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerNetworkInfoSwitchports
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerNetworkInfoSwitchports
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`10414` <- ServerSwitchport$new()$fromJSON(jsonlite::toJSON(this_object$`10414`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerNetworkInfoSwitchports and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `10414`
      if (!is.null(input_json$`10414`)) {
        stopifnot(R6::is.R6(input_json$`10414`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerNetworkInfoSwitchports: the required field `10414` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerNetworkInfoSwitchports
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `10414` is null
      if (is.null(self$`10414`)) {
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
      # check if the required `10414` is null
      if (is.null(self$`10414`)) {
        invalid_fields["10414"] <- "Non-nullable required field `10414` cannot be null."
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
# ServerNetworkInfoSwitchports$unlock()
#
## Below is an example to define the print function
# ServerNetworkInfoSwitchports$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerNetworkInfoSwitchports$lock()

