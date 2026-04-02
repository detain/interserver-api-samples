#' Create a new DomainServiceInfo
#'
#' @description
#' Detailed domain service record for a domain order.
#'
#' @docType class
#' @title DomainServiceInfo
#' @description DomainServiceInfo Class
#' @format An \code{R6Class} generator object
#' @field domain_id  character [optional]
#' @field domain_hostname  character [optional]
#' @field domain_username  character [optional]
#' @field domain_password  character [optional]
#' @field domain_type  character [optional]
#' @field domain_currency  character [optional]
#' @field domain_expire_date  character [optional]
#' @field domain_order_date  character [optional]
#' @field domain_custid  character [optional]
#' @field domain_status  character [optional]
#' @field domain_invoice  character [optional]
#' @field domain_coupon  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainServiceInfo <- R6::R6Class(
  "DomainServiceInfo",
  public = list(
    `domain_id` = NULL,
    `domain_hostname` = NULL,
    `domain_username` = NULL,
    `domain_password` = NULL,
    `domain_type` = NULL,
    `domain_currency` = NULL,
    `domain_expire_date` = NULL,
    `domain_order_date` = NULL,
    `domain_custid` = NULL,
    `domain_status` = NULL,
    `domain_invoice` = NULL,
    `domain_coupon` = NULL,

    #' @description
    #' Initialize a new DomainServiceInfo class.
    #'
    #' @param domain_id domain_id
    #' @param domain_hostname domain_hostname
    #' @param domain_username domain_username
    #' @param domain_password domain_password
    #' @param domain_type domain_type
    #' @param domain_currency domain_currency
    #' @param domain_expire_date domain_expire_date
    #' @param domain_order_date domain_order_date
    #' @param domain_custid domain_custid
    #' @param domain_status domain_status
    #' @param domain_invoice domain_invoice
    #' @param domain_coupon domain_coupon
    #' @param ... Other optional arguments.
    initialize = function(`domain_id` = NULL, `domain_hostname` = NULL, `domain_username` = NULL, `domain_password` = NULL, `domain_type` = NULL, `domain_currency` = NULL, `domain_expire_date` = NULL, `domain_order_date` = NULL, `domain_custid` = NULL, `domain_status` = NULL, `domain_invoice` = NULL, `domain_coupon` = NULL, ...) {
      if (!is.null(`domain_id`)) {
        if (!(is.character(`domain_id`) && length(`domain_id`) == 1)) {
          stop(paste("Error! Invalid data for `domain_id`. Must be a string:", `domain_id`))
        }
        self$`domain_id` <- `domain_id`
      }
      if (!is.null(`domain_hostname`)) {
        if (!(is.character(`domain_hostname`) && length(`domain_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `domain_hostname`. Must be a string:", `domain_hostname`))
        }
        self$`domain_hostname` <- `domain_hostname`
      }
      if (!is.null(`domain_username`)) {
        if (!(is.character(`domain_username`) && length(`domain_username`) == 1)) {
          stop(paste("Error! Invalid data for `domain_username`. Must be a string:", `domain_username`))
        }
        self$`domain_username` <- `domain_username`
      }
      if (!is.null(`domain_password`)) {
        if (!(is.character(`domain_password`) && length(`domain_password`) == 1)) {
          stop(paste("Error! Invalid data for `domain_password`. Must be a string:", `domain_password`))
        }
        self$`domain_password` <- `domain_password`
      }
      if (!is.null(`domain_type`)) {
        if (!(is.character(`domain_type`) && length(`domain_type`) == 1)) {
          stop(paste("Error! Invalid data for `domain_type`. Must be a string:", `domain_type`))
        }
        self$`domain_type` <- `domain_type`
      }
      if (!is.null(`domain_currency`)) {
        if (!(is.character(`domain_currency`) && length(`domain_currency`) == 1)) {
          stop(paste("Error! Invalid data for `domain_currency`. Must be a string:", `domain_currency`))
        }
        self$`domain_currency` <- `domain_currency`
      }
      if (!is.null(`domain_expire_date`)) {
        if (!(is.character(`domain_expire_date`) && length(`domain_expire_date`) == 1)) {
          stop(paste("Error! Invalid data for `domain_expire_date`. Must be a string:", `domain_expire_date`))
        }
        self$`domain_expire_date` <- `domain_expire_date`
      }
      if (!is.null(`domain_order_date`)) {
        if (!(is.character(`domain_order_date`) && length(`domain_order_date`) == 1)) {
          stop(paste("Error! Invalid data for `domain_order_date`. Must be a string:", `domain_order_date`))
        }
        self$`domain_order_date` <- `domain_order_date`
      }
      if (!is.null(`domain_custid`)) {
        if (!(is.character(`domain_custid`) && length(`domain_custid`) == 1)) {
          stop(paste("Error! Invalid data for `domain_custid`. Must be a string:", `domain_custid`))
        }
        self$`domain_custid` <- `domain_custid`
      }
      if (!is.null(`domain_status`)) {
        if (!(is.character(`domain_status`) && length(`domain_status`) == 1)) {
          stop(paste("Error! Invalid data for `domain_status`. Must be a string:", `domain_status`))
        }
        self$`domain_status` <- `domain_status`
      }
      if (!is.null(`domain_invoice`)) {
        if (!(is.character(`domain_invoice`) && length(`domain_invoice`) == 1)) {
          stop(paste("Error! Invalid data for `domain_invoice`. Must be a string:", `domain_invoice`))
        }
        self$`domain_invoice` <- `domain_invoice`
      }
      if (!is.null(`domain_coupon`)) {
        if (!(is.character(`domain_coupon`) && length(`domain_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `domain_coupon`. Must be a string:", `domain_coupon`))
        }
        self$`domain_coupon` <- `domain_coupon`
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
    #' @return DomainServiceInfo as a base R list.
    #' @examples
    #' # convert array of DomainServiceInfo (x) to a data frame
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
    #' Convert DomainServiceInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainServiceInfoObject <- list()
      if (!is.null(self$`domain_id`)) {
        DomainServiceInfoObject[["domain_id"]] <-
          self$`domain_id`
      }
      if (!is.null(self$`domain_hostname`)) {
        DomainServiceInfoObject[["domain_hostname"]] <-
          self$`domain_hostname`
      }
      if (!is.null(self$`domain_username`)) {
        DomainServiceInfoObject[["domain_username"]] <-
          self$`domain_username`
      }
      if (!is.null(self$`domain_password`)) {
        DomainServiceInfoObject[["domain_password"]] <-
          self$`domain_password`
      }
      if (!is.null(self$`domain_type`)) {
        DomainServiceInfoObject[["domain_type"]] <-
          self$`domain_type`
      }
      if (!is.null(self$`domain_currency`)) {
        DomainServiceInfoObject[["domain_currency"]] <-
          self$`domain_currency`
      }
      if (!is.null(self$`domain_expire_date`)) {
        DomainServiceInfoObject[["domain_expire_date"]] <-
          self$`domain_expire_date`
      }
      if (!is.null(self$`domain_order_date`)) {
        DomainServiceInfoObject[["domain_order_date"]] <-
          self$`domain_order_date`
      }
      if (!is.null(self$`domain_custid`)) {
        DomainServiceInfoObject[["domain_custid"]] <-
          self$`domain_custid`
      }
      if (!is.null(self$`domain_status`)) {
        DomainServiceInfoObject[["domain_status"]] <-
          self$`domain_status`
      }
      if (!is.null(self$`domain_invoice`)) {
        DomainServiceInfoObject[["domain_invoice"]] <-
          self$`domain_invoice`
      }
      if (!is.null(self$`domain_coupon`)) {
        DomainServiceInfoObject[["domain_coupon"]] <-
          self$`domain_coupon`
      }
      return(DomainServiceInfoObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainServiceInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`domain_id`)) {
        self$`domain_id` <- this_object$`domain_id`
      }
      if (!is.null(this_object$`domain_hostname`)) {
        self$`domain_hostname` <- this_object$`domain_hostname`
      }
      if (!is.null(this_object$`domain_username`)) {
        self$`domain_username` <- this_object$`domain_username`
      }
      if (!is.null(this_object$`domain_password`)) {
        self$`domain_password` <- this_object$`domain_password`
      }
      if (!is.null(this_object$`domain_type`)) {
        self$`domain_type` <- this_object$`domain_type`
      }
      if (!is.null(this_object$`domain_currency`)) {
        self$`domain_currency` <- this_object$`domain_currency`
      }
      if (!is.null(this_object$`domain_expire_date`)) {
        self$`domain_expire_date` <- this_object$`domain_expire_date`
      }
      if (!is.null(this_object$`domain_order_date`)) {
        self$`domain_order_date` <- this_object$`domain_order_date`
      }
      if (!is.null(this_object$`domain_custid`)) {
        self$`domain_custid` <- this_object$`domain_custid`
      }
      if (!is.null(this_object$`domain_status`)) {
        self$`domain_status` <- this_object$`domain_status`
      }
      if (!is.null(this_object$`domain_invoice`)) {
        self$`domain_invoice` <- this_object$`domain_invoice`
      }
      if (!is.null(this_object$`domain_coupon`)) {
        self$`domain_coupon` <- this_object$`domain_coupon`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainServiceInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainServiceInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainServiceInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`domain_id` <- this_object$`domain_id`
      self$`domain_hostname` <- this_object$`domain_hostname`
      self$`domain_username` <- this_object$`domain_username`
      self$`domain_password` <- this_object$`domain_password`
      self$`domain_type` <- this_object$`domain_type`
      self$`domain_currency` <- this_object$`domain_currency`
      self$`domain_expire_date` <- this_object$`domain_expire_date`
      self$`domain_order_date` <- this_object$`domain_order_date`
      self$`domain_custid` <- this_object$`domain_custid`
      self$`domain_status` <- this_object$`domain_status`
      self$`domain_invoice` <- this_object$`domain_invoice`
      self$`domain_coupon` <- this_object$`domain_coupon`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainServiceInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainServiceInfo
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
# DomainServiceInfo$unlock()
#
## Below is an example to define the print function
# DomainServiceInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainServiceInfo$lock()

