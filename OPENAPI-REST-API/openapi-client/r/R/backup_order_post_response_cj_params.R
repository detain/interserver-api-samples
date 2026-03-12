#' Create a new BackupOrderPostResponseCjParams
#'
#' @description
#' BackupOrderPostResponseCjParams Class
#'
#' @docType class
#' @title BackupOrderPostResponseCjParams
#' @description BackupOrderPostResponseCjParams Class
#' @format An \code{R6Class} generator object
#' @field containerTagId  character [optional]
#' @field CID  character [optional]
#' @field OID  character [optional]
#' @field TYPE  character [optional]
#' @field ITEM1  character [optional]
#' @field AMT1  character [optional]
#' @field QTY1  integer [optional]
#' @field CURRENCY  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupOrderPostResponseCjParams <- R6::R6Class(
  "BackupOrderPostResponseCjParams",
  public = list(
    `containerTagId` = NULL,
    `CID` = NULL,
    `OID` = NULL,
    `TYPE` = NULL,
    `ITEM1` = NULL,
    `AMT1` = NULL,
    `QTY1` = NULL,
    `CURRENCY` = NULL,

    #' @description
    #' Initialize a new BackupOrderPostResponseCjParams class.
    #'
    #' @param containerTagId containerTagId
    #' @param CID CID
    #' @param OID OID
    #' @param TYPE TYPE
    #' @param ITEM1 ITEM1
    #' @param AMT1 AMT1
    #' @param QTY1 QTY1
    #' @param CURRENCY CURRENCY
    #' @param ... Other optional arguments.
    initialize = function(`containerTagId` = NULL, `CID` = NULL, `OID` = NULL, `TYPE` = NULL, `ITEM1` = NULL, `AMT1` = NULL, `QTY1` = NULL, `CURRENCY` = NULL, ...) {
      if (!is.null(`containerTagId`)) {
        if (!(is.character(`containerTagId`) && length(`containerTagId`) == 1)) {
          stop(paste("Error! Invalid data for `containerTagId`. Must be a string:", `containerTagId`))
        }
        self$`containerTagId` <- `containerTagId`
      }
      if (!is.null(`CID`)) {
        if (!(is.character(`CID`) && length(`CID`) == 1)) {
          stop(paste("Error! Invalid data for `CID`. Must be a string:", `CID`))
        }
        self$`CID` <- `CID`
      }
      if (!is.null(`OID`)) {
        if (!(is.character(`OID`) && length(`OID`) == 1)) {
          stop(paste("Error! Invalid data for `OID`. Must be a string:", `OID`))
        }
        self$`OID` <- `OID`
      }
      if (!is.null(`TYPE`)) {
        if (!(is.character(`TYPE`) && length(`TYPE`) == 1)) {
          stop(paste("Error! Invalid data for `TYPE`. Must be a string:", `TYPE`))
        }
        self$`TYPE` <- `TYPE`
      }
      if (!is.null(`ITEM1`)) {
        if (!(is.character(`ITEM1`) && length(`ITEM1`) == 1)) {
          stop(paste("Error! Invalid data for `ITEM1`. Must be a string:", `ITEM1`))
        }
        self$`ITEM1` <- `ITEM1`
      }
      if (!is.null(`AMT1`)) {
        if (!(is.character(`AMT1`) && length(`AMT1`) == 1)) {
          stop(paste("Error! Invalid data for `AMT1`. Must be a string:", `AMT1`))
        }
        self$`AMT1` <- `AMT1`
      }
      if (!is.null(`QTY1`)) {
        if (!(is.numeric(`QTY1`) && length(`QTY1`) == 1)) {
          stop(paste("Error! Invalid data for `QTY1`. Must be an integer:", `QTY1`))
        }
        self$`QTY1` <- `QTY1`
      }
      if (!is.null(`CURRENCY`)) {
        if (!(is.character(`CURRENCY`) && length(`CURRENCY`) == 1)) {
          stop(paste("Error! Invalid data for `CURRENCY`. Must be a string:", `CURRENCY`))
        }
        self$`CURRENCY` <- `CURRENCY`
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
    #' @return BackupOrderPostResponseCjParams as a base R list.
    #' @examples
    #' # convert array of BackupOrderPostResponseCjParams (x) to a data frame
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
    #' Convert BackupOrderPostResponseCjParams to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupOrderPostResponseCjParamsObject <- list()
      if (!is.null(self$`containerTagId`)) {
        BackupOrderPostResponseCjParamsObject[["containerTagId"]] <-
          self$`containerTagId`
      }
      if (!is.null(self$`CID`)) {
        BackupOrderPostResponseCjParamsObject[["CID"]] <-
          self$`CID`
      }
      if (!is.null(self$`OID`)) {
        BackupOrderPostResponseCjParamsObject[["OID"]] <-
          self$`OID`
      }
      if (!is.null(self$`TYPE`)) {
        BackupOrderPostResponseCjParamsObject[["TYPE"]] <-
          self$`TYPE`
      }
      if (!is.null(self$`ITEM1`)) {
        BackupOrderPostResponseCjParamsObject[["ITEM1"]] <-
          self$`ITEM1`
      }
      if (!is.null(self$`AMT1`)) {
        BackupOrderPostResponseCjParamsObject[["AMT1"]] <-
          self$`AMT1`
      }
      if (!is.null(self$`QTY1`)) {
        BackupOrderPostResponseCjParamsObject[["QTY1"]] <-
          self$`QTY1`
      }
      if (!is.null(self$`CURRENCY`)) {
        BackupOrderPostResponseCjParamsObject[["CURRENCY"]] <-
          self$`CURRENCY`
      }
      return(BackupOrderPostResponseCjParamsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupOrderPostResponseCjParams
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupOrderPostResponseCjParams
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`containerTagId`)) {
        self$`containerTagId` <- this_object$`containerTagId`
      }
      if (!is.null(this_object$`CID`)) {
        self$`CID` <- this_object$`CID`
      }
      if (!is.null(this_object$`OID`)) {
        self$`OID` <- this_object$`OID`
      }
      if (!is.null(this_object$`TYPE`)) {
        self$`TYPE` <- this_object$`TYPE`
      }
      if (!is.null(this_object$`ITEM1`)) {
        self$`ITEM1` <- this_object$`ITEM1`
      }
      if (!is.null(this_object$`AMT1`)) {
        self$`AMT1` <- this_object$`AMT1`
      }
      if (!is.null(this_object$`QTY1`)) {
        self$`QTY1` <- this_object$`QTY1`
      }
      if (!is.null(this_object$`CURRENCY`)) {
        self$`CURRENCY` <- this_object$`CURRENCY`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupOrderPostResponseCjParams in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupOrderPostResponseCjParams
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupOrderPostResponseCjParams
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`containerTagId` <- this_object$`containerTagId`
      self$`CID` <- this_object$`CID`
      self$`OID` <- this_object$`OID`
      self$`TYPE` <- this_object$`TYPE`
      self$`ITEM1` <- this_object$`ITEM1`
      self$`AMT1` <- this_object$`AMT1`
      self$`QTY1` <- this_object$`QTY1`
      self$`CURRENCY` <- this_object$`CURRENCY`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupOrderPostResponseCjParams and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupOrderPostResponseCjParams
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
# BackupOrderPostResponseCjParams$unlock()
#
## Below is an example to define the print function
# BackupOrderPostResponseCjParams$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupOrderPostResponseCjParams$lock()

