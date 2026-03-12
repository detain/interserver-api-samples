#' Create a new ServerNetworkInfoAssets
#'
#' @description
#' Object containing asset information.
#'
#' @docType class
#' @title ServerNetworkInfoAssets
#' @description ServerNetworkInfoAssets Class
#' @format An \code{R6Class} generator object
#' @field 3497  \link{ServerAsset}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerNetworkInfoAssets <- R6::R6Class(
  "ServerNetworkInfoAssets",
  public = list(
    `3497` = NULL,

    #' @description
    #' Initialize a new ServerNetworkInfoAssets class.
    #'
    #' @param 3497 3497
    #' @param ... Other optional arguments.
    initialize = function(`3497`, ...) {
      if (!missing(`3497`)) {
        stopifnot(R6::is.R6(`3497`))
        self$`3497` <- `3497`
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
    #' @return ServerNetworkInfoAssets as a base R list.
    #' @examples
    #' # convert array of ServerNetworkInfoAssets (x) to a data frame
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
    #' Convert ServerNetworkInfoAssets to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerNetworkInfoAssetsObject <- list()
      if (!is.null(self$`3497`)) {
        ServerNetworkInfoAssetsObject[["3497"]] <-
          self$extractSimpleType(self$`3497`)
      }
      return(ServerNetworkInfoAssetsObject)
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
    #' Deserialize JSON string into an instance of ServerNetworkInfoAssets
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerNetworkInfoAssets
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`3497`)) {
        `3497_object` <- ServerAsset$new()
        `3497_object`$fromJSON(jsonlite::toJSON(this_object$`3497`, auto_unbox = TRUE, digits = NA))
        self$`3497` <- `3497_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerNetworkInfoAssets in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerNetworkInfoAssets
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerNetworkInfoAssets
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`3497` <- ServerAsset$new()$fromJSON(jsonlite::toJSON(this_object$`3497`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerNetworkInfoAssets and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `3497`
      if (!is.null(input_json$`3497`)) {
        stopifnot(R6::is.R6(input_json$`3497`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerNetworkInfoAssets: the required field `3497` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerNetworkInfoAssets
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `3497` is null
      if (is.null(self$`3497`)) {
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
      # check if the required `3497` is null
      if (is.null(self$`3497`)) {
        invalid_fields["3497"] <- "Non-nullable required field `3497` cannot be null."
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
# ServerNetworkInfoAssets$unlock()
#
## Below is an example to define the print function
# ServerNetworkInfoAssets$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerNetworkInfoAssets$lock()

