#' Create a new DomainBillingExtra
#'
#' @description
#' Extended billing context for a domain including registrar order details and contact info.
#'
#' @docType class
#' @title DomainBillingExtra
#' @description DomainBillingExtra Class
#' @format An \code{R6Class} generator object
#' @field order  \link{DomainOrderResponse} [optional]
#' @field order_id  character [optional]
#' @field domain_id  character [optional]
#' @field provProcessPending  \link{DomainProvProcessPending} [optional]
#' @field email  character [optional]
#' @field firstname  character [optional]
#' @field lastname  character [optional]
#' @field company  character [optional]
#' @field address  character [optional]
#' @field address2  character [optional]
#' @field address3  character [optional]
#' @field city  character [optional]
#' @field state  character [optional]
#' @field zip  character [optional]
#' @field country  character [optional]
#' @field phone  character [optional]
#' @field fax  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainBillingExtra <- R6::R6Class(
  "DomainBillingExtra",
  public = list(
    `order` = NULL,
    `order_id` = NULL,
    `domain_id` = NULL,
    `provProcessPending` = NULL,
    `email` = NULL,
    `firstname` = NULL,
    `lastname` = NULL,
    `company` = NULL,
    `address` = NULL,
    `address2` = NULL,
    `address3` = NULL,
    `city` = NULL,
    `state` = NULL,
    `zip` = NULL,
    `country` = NULL,
    `phone` = NULL,
    `fax` = NULL,

    #' @description
    #' Initialize a new DomainBillingExtra class.
    #'
    #' @param order order
    #' @param order_id order_id
    #' @param domain_id domain_id
    #' @param provProcessPending provProcessPending
    #' @param email email
    #' @param firstname firstname
    #' @param lastname lastname
    #' @param company company
    #' @param address address
    #' @param address2 address2
    #' @param address3 address3
    #' @param city city
    #' @param state state
    #' @param zip zip
    #' @param country country
    #' @param phone phone
    #' @param fax fax
    #' @param ... Other optional arguments.
    initialize = function(`order` = NULL, `order_id` = NULL, `domain_id` = NULL, `provProcessPending` = NULL, `email` = NULL, `firstname` = NULL, `lastname` = NULL, `company` = NULL, `address` = NULL, `address2` = NULL, `address3` = NULL, `city` = NULL, `state` = NULL, `zip` = NULL, `country` = NULL, `phone` = NULL, `fax` = NULL, ...) {
      if (!is.null(`order`)) {
        stopifnot(R6::is.R6(`order`))
        self$`order` <- `order`
      }
      if (!is.null(`order_id`)) {
        if (!(is.character(`order_id`) && length(`order_id`) == 1)) {
          stop(paste("Error! Invalid data for `order_id`. Must be a string:", `order_id`))
        }
        self$`order_id` <- `order_id`
      }
      if (!is.null(`domain_id`)) {
        if (!(is.character(`domain_id`) && length(`domain_id`) == 1)) {
          stop(paste("Error! Invalid data for `domain_id`. Must be a string:", `domain_id`))
        }
        self$`domain_id` <- `domain_id`
      }
      if (!is.null(`provProcessPending`)) {
        stopifnot(R6::is.R6(`provProcessPending`))
        self$`provProcessPending` <- `provProcessPending`
      }
      if (!is.null(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!is.null(`firstname`)) {
        if (!(is.character(`firstname`) && length(`firstname`) == 1)) {
          stop(paste("Error! Invalid data for `firstname`. Must be a string:", `firstname`))
        }
        self$`firstname` <- `firstname`
      }
      if (!is.null(`lastname`)) {
        if (!(is.character(`lastname`) && length(`lastname`) == 1)) {
          stop(paste("Error! Invalid data for `lastname`. Must be a string:", `lastname`))
        }
        self$`lastname` <- `lastname`
      }
      if (!is.null(`company`)) {
        if (!(is.character(`company`) && length(`company`) == 1)) {
          stop(paste("Error! Invalid data for `company`. Must be a string:", `company`))
        }
        self$`company` <- `company`
      }
      if (!is.null(`address`)) {
        if (!(is.character(`address`) && length(`address`) == 1)) {
          stop(paste("Error! Invalid data for `address`. Must be a string:", `address`))
        }
        self$`address` <- `address`
      }
      if (!is.null(`address2`)) {
        if (!(is.character(`address2`) && length(`address2`) == 1)) {
          stop(paste("Error! Invalid data for `address2`. Must be a string:", `address2`))
        }
        self$`address2` <- `address2`
      }
      if (!is.null(`address3`)) {
        if (!(is.character(`address3`) && length(`address3`) == 1)) {
          stop(paste("Error! Invalid data for `address3`. Must be a string:", `address3`))
        }
        self$`address3` <- `address3`
      }
      if (!is.null(`city`)) {
        if (!(is.character(`city`) && length(`city`) == 1)) {
          stop(paste("Error! Invalid data for `city`. Must be a string:", `city`))
        }
        self$`city` <- `city`
      }
      if (!is.null(`state`)) {
        if (!(is.character(`state`) && length(`state`) == 1)) {
          stop(paste("Error! Invalid data for `state`. Must be a string:", `state`))
        }
        self$`state` <- `state`
      }
      if (!is.null(`zip`)) {
        if (!(is.character(`zip`) && length(`zip`) == 1)) {
          stop(paste("Error! Invalid data for `zip`. Must be a string:", `zip`))
        }
        self$`zip` <- `zip`
      }
      if (!is.null(`country`)) {
        if (!(is.character(`country`) && length(`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", `country`))
        }
        self$`country` <- `country`
      }
      if (!is.null(`phone`)) {
        if (!(is.character(`phone`) && length(`phone`) == 1)) {
          stop(paste("Error! Invalid data for `phone`. Must be a string:", `phone`))
        }
        self$`phone` <- `phone`
      }
      if (!is.null(`fax`)) {
        if (!(is.character(`fax`) && length(`fax`) == 1)) {
          stop(paste("Error! Invalid data for `fax`. Must be a string:", `fax`))
        }
        self$`fax` <- `fax`
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
    #' @return DomainBillingExtra as a base R list.
    #' @examples
    #' # convert array of DomainBillingExtra (x) to a data frame
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
    #' Convert DomainBillingExtra to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainBillingExtraObject <- list()
      if (!is.null(self$`order`)) {
        DomainBillingExtraObject[["order"]] <-
          self$extractSimpleType(self$`order`)
      }
      if (!is.null(self$`order_id`)) {
        DomainBillingExtraObject[["order_id"]] <-
          self$`order_id`
      }
      if (!is.null(self$`domain_id`)) {
        DomainBillingExtraObject[["domain_id"]] <-
          self$`domain_id`
      }
      if (!is.null(self$`provProcessPending`)) {
        DomainBillingExtraObject[["provProcessPending"]] <-
          self$extractSimpleType(self$`provProcessPending`)
      }
      if (!is.null(self$`email`)) {
        DomainBillingExtraObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`firstname`)) {
        DomainBillingExtraObject[["firstname"]] <-
          self$`firstname`
      }
      if (!is.null(self$`lastname`)) {
        DomainBillingExtraObject[["lastname"]] <-
          self$`lastname`
      }
      if (!is.null(self$`company`)) {
        DomainBillingExtraObject[["company"]] <-
          self$`company`
      }
      if (!is.null(self$`address`)) {
        DomainBillingExtraObject[["address"]] <-
          self$`address`
      }
      if (!is.null(self$`address2`)) {
        DomainBillingExtraObject[["address2"]] <-
          self$`address2`
      }
      if (!is.null(self$`address3`)) {
        DomainBillingExtraObject[["address3"]] <-
          self$`address3`
      }
      if (!is.null(self$`city`)) {
        DomainBillingExtraObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`state`)) {
        DomainBillingExtraObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`zip`)) {
        DomainBillingExtraObject[["zip"]] <-
          self$`zip`
      }
      if (!is.null(self$`country`)) {
        DomainBillingExtraObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`phone`)) {
        DomainBillingExtraObject[["phone"]] <-
          self$`phone`
      }
      if (!is.null(self$`fax`)) {
        DomainBillingExtraObject[["fax"]] <-
          self$`fax`
      }
      return(DomainBillingExtraObject)
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
    #' Deserialize JSON string into an instance of DomainBillingExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainBillingExtra
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`order`)) {
        `order_object` <- DomainOrderResponse$new()
        `order_object`$fromJSON(jsonlite::toJSON(this_object$`order`, auto_unbox = TRUE, digits = NA))
        self$`order` <- `order_object`
      }
      if (!is.null(this_object$`order_id`)) {
        self$`order_id` <- this_object$`order_id`
      }
      if (!is.null(this_object$`domain_id`)) {
        self$`domain_id` <- this_object$`domain_id`
      }
      if (!is.null(this_object$`provProcessPending`)) {
        `provprocesspending_object` <- DomainProvProcessPending$new()
        `provprocesspending_object`$fromJSON(jsonlite::toJSON(this_object$`provProcessPending`, auto_unbox = TRUE, digits = NA))
        self$`provProcessPending` <- `provprocesspending_object`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`firstname`)) {
        self$`firstname` <- this_object$`firstname`
      }
      if (!is.null(this_object$`lastname`)) {
        self$`lastname` <- this_object$`lastname`
      }
      if (!is.null(this_object$`company`)) {
        self$`company` <- this_object$`company`
      }
      if (!is.null(this_object$`address`)) {
        self$`address` <- this_object$`address`
      }
      if (!is.null(this_object$`address2`)) {
        self$`address2` <- this_object$`address2`
      }
      if (!is.null(this_object$`address3`)) {
        self$`address3` <- this_object$`address3`
      }
      if (!is.null(this_object$`city`)) {
        self$`city` <- this_object$`city`
      }
      if (!is.null(this_object$`state`)) {
        self$`state` <- this_object$`state`
      }
      if (!is.null(this_object$`zip`)) {
        self$`zip` <- this_object$`zip`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`phone`)) {
        self$`phone` <- this_object$`phone`
      }
      if (!is.null(this_object$`fax`)) {
        self$`fax` <- this_object$`fax`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainBillingExtra in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainBillingExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainBillingExtra
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`order` <- DomainOrderResponse$new()$fromJSON(jsonlite::toJSON(this_object$`order`, auto_unbox = TRUE, digits = NA))
      self$`order_id` <- this_object$`order_id`
      self$`domain_id` <- this_object$`domain_id`
      self$`provProcessPending` <- DomainProvProcessPending$new()$fromJSON(jsonlite::toJSON(this_object$`provProcessPending`, auto_unbox = TRUE, digits = NA))
      self$`email` <- this_object$`email`
      self$`firstname` <- this_object$`firstname`
      self$`lastname` <- this_object$`lastname`
      self$`company` <- this_object$`company`
      self$`address` <- this_object$`address`
      self$`address2` <- this_object$`address2`
      self$`address3` <- this_object$`address3`
      self$`city` <- this_object$`city`
      self$`state` <- this_object$`state`
      self$`zip` <- this_object$`zip`
      self$`country` <- this_object$`country`
      self$`phone` <- this_object$`phone`
      self$`fax` <- this_object$`fax`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainBillingExtra and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainBillingExtra
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
# DomainBillingExtra$unlock()
#
## Below is an example to define the print function
# DomainBillingExtra$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainBillingExtra$lock()

