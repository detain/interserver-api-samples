#' Create a new VpsOrderLocationStock1
#'
#' @description
#' VpsOrderLocationStock1 Class
#'
#' @docType class
#' @title VpsOrderLocationStock1
#' @description VpsOrderLocationStock1 Class
#' @format An \code{R6Class} generator object
#' @field kvm  character [optional]
#' @field kvmstorage  character [optional]
#' @field hyperv  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderLocationStock1 <- R6::R6Class(
  "VpsOrderLocationStock1",
  public = list(
    `kvm` = NULL,
    `kvmstorage` = NULL,
    `hyperv` = NULL,

    #' @description
    #' Initialize a new VpsOrderLocationStock1 class.
    #'
    #' @param kvm kvm
    #' @param kvmstorage kvmstorage
    #' @param hyperv hyperv
    #' @param ... Other optional arguments.
    initialize = function(`kvm` = NULL, `kvmstorage` = NULL, `hyperv` = NULL, ...) {
      if (!is.null(`kvm`)) {
        if (!(is.logical(`kvm`) && length(`kvm`) == 1)) {
          stop(paste("Error! Invalid data for `kvm`. Must be a boolean:", `kvm`))
        }
        self$`kvm` <- `kvm`
      }
      if (!is.null(`kvmstorage`)) {
        if (!(is.logical(`kvmstorage`) && length(`kvmstorage`) == 1)) {
          stop(paste("Error! Invalid data for `kvmstorage`. Must be a boolean:", `kvmstorage`))
        }
        self$`kvmstorage` <- `kvmstorage`
      }
      if (!is.null(`hyperv`)) {
        if (!(is.logical(`hyperv`) && length(`hyperv`) == 1)) {
          stop(paste("Error! Invalid data for `hyperv`. Must be a boolean:", `hyperv`))
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
    #' @return VpsOrderLocationStock1 as a base R list.
    #' @examples
    #' # convert array of VpsOrderLocationStock1 (x) to a data frame
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
    #' Convert VpsOrderLocationStock1 to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderLocationStock1Object <- list()
      if (!is.null(self$`kvm`)) {
        VpsOrderLocationStock1Object[["kvm"]] <-
          self$`kvm`
      }
      if (!is.null(self$`kvmstorage`)) {
        VpsOrderLocationStock1Object[["kvmstorage"]] <-
          self$`kvmstorage`
      }
      if (!is.null(self$`hyperv`)) {
        VpsOrderLocationStock1Object[["hyperv"]] <-
          self$`hyperv`
      }
      return(VpsOrderLocationStock1Object)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderLocationStock1
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationStock1
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
    #' @return VpsOrderLocationStock1 in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderLocationStock1
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationStock1
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`kvm` <- this_object$`kvm`
      self$`kvmstorage` <- this_object$`kvmstorage`
      self$`hyperv` <- this_object$`hyperv`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderLocationStock1 and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderLocationStock1
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
# VpsOrderLocationStock1$unlock()
#
## Below is an example to define the print function
# VpsOrderLocationStock1$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderLocationStock1$lock()

