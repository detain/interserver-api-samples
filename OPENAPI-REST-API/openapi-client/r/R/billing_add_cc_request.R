#' Create a new BillingAddCcRequest
#'
#' @description
#' Request to add a new creditcard into the system.
#'
#' @docType class
#' @title BillingAddCcRequest
#' @description BillingAddCcRequest Class
#' @format An \code{R6Class} generator object
#' @field name  character [optional]
#' @field address  character [optional]
#' @field city  character [optional]
#' @field state  character [optional]
#' @field country  character [optional]
#' @field zip  character [optional]
#' @field cc  character [optional]
#' @field cc_exp  character [optional]
#' @field cc_ccv2  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BillingAddCcRequest <- R6::R6Class(
  "BillingAddCcRequest",
  public = list(
    `name` = NULL,
    `address` = NULL,
    `city` = NULL,
    `state` = NULL,
    `country` = NULL,
    `zip` = NULL,
    `cc` = NULL,
    `cc_exp` = NULL,
    `cc_ccv2` = NULL,

    #' @description
    #' Initialize a new BillingAddCcRequest class.
    #'
    #' @param name name
    #' @param address address
    #' @param city city
    #' @param state state
    #' @param country country
    #' @param zip zip
    #' @param cc cc
    #' @param cc_exp cc_exp
    #' @param cc_ccv2 cc_ccv2
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `address` = NULL, `city` = NULL, `state` = NULL, `country` = NULL, `zip` = NULL, `cc` = NULL, `cc_exp` = NULL, `cc_ccv2` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`address`)) {
        if (!(is.character(`address`) && length(`address`) == 1)) {
          stop(paste("Error! Invalid data for `address`. Must be a string:", `address`))
        }
        self$`address` <- `address`
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
      if (!is.null(`country`)) {
        if (!(is.character(`country`) && length(`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", `country`))
        }
        self$`country` <- `country`
      }
      if (!is.null(`zip`)) {
        if (!(is.character(`zip`) && length(`zip`) == 1)) {
          stop(paste("Error! Invalid data for `zip`. Must be a string:", `zip`))
        }
        self$`zip` <- `zip`
      }
      if (!is.null(`cc`)) {
        if (!(is.character(`cc`) && length(`cc`) == 1)) {
          stop(paste("Error! Invalid data for `cc`. Must be a string:", `cc`))
        }
        self$`cc` <- `cc`
      }
      if (!is.null(`cc_exp`)) {
        if (!(is.character(`cc_exp`) && length(`cc_exp`) == 1)) {
          stop(paste("Error! Invalid data for `cc_exp`. Must be a string:", `cc_exp`))
        }
        self$`cc_exp` <- `cc_exp`
      }
      if (!is.null(`cc_ccv2`)) {
        if (!(is.character(`cc_ccv2`) && length(`cc_ccv2`) == 1)) {
          stop(paste("Error! Invalid data for `cc_ccv2`. Must be a string:", `cc_ccv2`))
        }
        self$`cc_ccv2` <- `cc_ccv2`
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
    #' @return BillingAddCcRequest as a base R list.
    #' @examples
    #' # convert array of BillingAddCcRequest (x) to a data frame
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
    #' Convert BillingAddCcRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BillingAddCcRequestObject <- list()
      if (!is.null(self$`name`)) {
        BillingAddCcRequestObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`address`)) {
        BillingAddCcRequestObject[["address"]] <-
          self$`address`
      }
      if (!is.null(self$`city`)) {
        BillingAddCcRequestObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`state`)) {
        BillingAddCcRequestObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`country`)) {
        BillingAddCcRequestObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`zip`)) {
        BillingAddCcRequestObject[["zip"]] <-
          self$`zip`
      }
      if (!is.null(self$`cc`)) {
        BillingAddCcRequestObject[["cc"]] <-
          self$`cc`
      }
      if (!is.null(self$`cc_exp`)) {
        BillingAddCcRequestObject[["cc_exp"]] <-
          self$`cc_exp`
      }
      if (!is.null(self$`cc_ccv2`)) {
        BillingAddCcRequestObject[["cc_ccv2"]] <-
          self$`cc_ccv2`
      }
      return(BillingAddCcRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingAddCcRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingAddCcRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`address`)) {
        self$`address` <- this_object$`address`
      }
      if (!is.null(this_object$`city`)) {
        self$`city` <- this_object$`city`
      }
      if (!is.null(this_object$`state`)) {
        self$`state` <- this_object$`state`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`zip`)) {
        self$`zip` <- this_object$`zip`
      }
      if (!is.null(this_object$`cc`)) {
        self$`cc` <- this_object$`cc`
      }
      if (!is.null(this_object$`cc_exp`)) {
        self$`cc_exp` <- this_object$`cc_exp`
      }
      if (!is.null(this_object$`cc_ccv2`)) {
        self$`cc_ccv2` <- this_object$`cc_ccv2`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BillingAddCcRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingAddCcRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingAddCcRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`address` <- this_object$`address`
      self$`city` <- this_object$`city`
      self$`state` <- this_object$`state`
      self$`country` <- this_object$`country`
      self$`zip` <- this_object$`zip`
      self$`cc` <- this_object$`cc`
      self$`cc_exp` <- this_object$`cc_exp`
      self$`cc_ccv2` <- this_object$`cc_ccv2`
      self
    },

    #' @description
    #' Validate JSON input with respect to BillingAddCcRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BillingAddCcRequest
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
# BillingAddCcRequest$unlock()
#
## Below is an example to define the print function
# BillingAddCcRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BillingAddCcRequest$lock()

