#' Create a new ServerExtraInfoTables
#'
#' @description
#' ServerExtraInfoTables Class
#'
#' @docType class
#' @title ServerExtraInfoTables
#' @description ServerExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field assets  \link{ServerAssets}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerExtraInfoTables <- R6::R6Class(
  "ServerExtraInfoTables",
  public = list(
    `assets` = NULL,

    #' @description
    #' Initialize a new ServerExtraInfoTables class.
    #'
    #' @param assets assets
    #' @param ... Other optional arguments.
    initialize = function(`assets`, ...) {
      if (!missing(`assets`)) {
        stopifnot(R6::is.R6(`assets`))
        self$`assets` <- `assets`
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
    #' @return ServerExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of ServerExtraInfoTables (x) to a data frame
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
    #' Convert ServerExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerExtraInfoTablesObject <- list()
      if (!is.null(self$`assets`)) {
        ServerExtraInfoTablesObject[["assets"]] <-
          self$extractSimpleType(self$`assets`)
      }
      return(ServerExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of ServerExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`assets`)) {
        `assets_object` <- ServerAssets$new()
        `assets_object`$fromJSON(jsonlite::toJSON(this_object$`assets`, auto_unbox = TRUE, digits = NA))
        self$`assets` <- `assets_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`assets` <- ServerAssets$new()$fromJSON(jsonlite::toJSON(this_object$`assets`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `assets`
      if (!is.null(input_json$`assets`)) {
        stopifnot(R6::is.R6(input_json$`assets`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerExtraInfoTables: the required field `assets` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerExtraInfoTables
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `assets` is null
      if (is.null(self$`assets`)) {
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
      # check if the required `assets` is null
      if (is.null(self$`assets`)) {
        invalid_fields["assets"] <- "Non-nullable required field `assets` cannot be null."
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
# ServerExtraInfoTables$unlock()
#
## Below is an example to define the print function
# ServerExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerExtraInfoTables$lock()

