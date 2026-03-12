#' Create a new VpsOrderPlatformNames
#'
#' @description
#' Platform Names
#'
#' @docType class
#' @title VpsOrderPlatformNames
#' @description VpsOrderPlatformNames Class
#' @format An \code{R6Class} generator object
#' @field kvm  character [optional]
#' @field kvmstorage  character [optional]
#' @field hyperv  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderPlatformNames <- R6::R6Class(
  "VpsOrderPlatformNames",
  public = list(
    `kvm` = NULL,
    `kvmstorage` = NULL,
    `hyperv` = NULL,

    #' @description
    #' Initialize a new VpsOrderPlatformNames class.
    #'
    #' @param kvm kvm
    #' @param kvmstorage kvmstorage
    #' @param hyperv hyperv
    #' @param ... Other optional arguments.
    initialize = function(`kvm` = NULL, `kvmstorage` = NULL, `hyperv` = NULL, ...) {
      if (!is.null(`kvm`)) {
        if (!(is.character(`kvm`) && length(`kvm`) == 1)) {
          stop(paste("Error! Invalid data for `kvm`. Must be a string:", `kvm`))
        }
        self$`kvm` <- `kvm`
      }
      if (!is.null(`kvmstorage`)) {
        if (!(is.character(`kvmstorage`) && length(`kvmstorage`) == 1)) {
          stop(paste("Error! Invalid data for `kvmstorage`. Must be a string:", `kvmstorage`))
        }
        self$`kvmstorage` <- `kvmstorage`
      }
      if (!is.null(`hyperv`)) {
        if (!(is.character(`hyperv`) && length(`hyperv`) == 1)) {
          stop(paste("Error! Invalid data for `hyperv`. Must be a string:", `hyperv`))
        }
        self$`hyperv` <- `hyperv`
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
    #' @return VpsOrderPlatformNames as a base R list.
    #' @examples
    #' # convert array of VpsOrderPlatformNames (x) to a data frame
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
    #' Convert VpsOrderPlatformNames to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderPlatformNamesObject <- list()
      if (!is.null(self$`kvm`)) {
        VpsOrderPlatformNamesObject[["kvm"]] <-
          self$`kvm`
      }
      if (!is.null(self$`kvmstorage`)) {
        VpsOrderPlatformNamesObject[["kvmstorage"]] <-
          self$`kvmstorage`
      }
      if (!is.null(self$`hyperv`)) {
        VpsOrderPlatformNamesObject[["hyperv"]] <-
          self$`hyperv`
      }
      return(VpsOrderPlatformNamesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderPlatformNames
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderPlatformNames
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`kvm`)) {
        self$`kvm` <- this_object$`kvm`
      }
      if (!is.null(this_object$`kvmstorage`)) {
        self$`kvmstorage` <- this_object$`kvmstorage`
      }
      if (!is.null(this_object$`hyperv`)) {
        self$`hyperv` <- this_object$`hyperv`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrderPlatformNames in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderPlatformNames
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderPlatformNames
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`kvm` <- this_object$`kvm`
      self$`kvmstorage` <- this_object$`kvmstorage`
      self$`hyperv` <- this_object$`hyperv`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderPlatformNames and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderPlatformNames
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
# VpsOrderPlatformNames$unlock()
#
## Below is an example to define the print function
# VpsOrderPlatformNames$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderPlatformNames$lock()

