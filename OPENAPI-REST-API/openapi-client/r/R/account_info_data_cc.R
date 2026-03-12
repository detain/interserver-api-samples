#' Create a new AccountInfoDataCc
#'
#' @description
#' Credit card information stored on the account.
#'
#' @docType class
#' @title AccountInfoDataCc
#' @description AccountInfoDataCc Class
#' @format An \code{R6Class} generator object
#' @field cc  character [optional]
#' @field cc_exp  character [optional]
#' @field name  character [optional]
#' @field address  character [optional]
#' @field city  character [optional]
#' @field state  character [optional]
#' @field zip  character [optional]
#' @field country  character [optional]
#' @field maxmind_riskscore  character [optional]
#' @field maxmind  \link{AccountInfoMaxMindResponse} [optional]
#' @field verified  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoDataCc <- R6::R6Class(
  "AccountInfoDataCc",
  public = list(
    `cc` = NULL,
    `cc_exp` = NULL,
    `name` = NULL,
    `address` = NULL,
    `city` = NULL,
    `state` = NULL,
    `zip` = NULL,
    `country` = NULL,
    `maxmind_riskscore` = NULL,
    `maxmind` = NULL,
    `verified` = NULL,

    #' @description
    #' Initialize a new AccountInfoDataCc class.
    #'
    #' @param cc cc
    #' @param cc_exp cc_exp
    #' @param name name
    #' @param address address
    #' @param city city
    #' @param state state
    #' @param zip zip
    #' @param country country
    #' @param maxmind_riskscore maxmind_riskscore
    #' @param maxmind maxmind
    #' @param verified verified
    #' @param ... Other optional arguments.
    initialize = function(`cc` = NULL, `cc_exp` = NULL, `name` = NULL, `address` = NULL, `city` = NULL, `state` = NULL, `zip` = NULL, `country` = NULL, `maxmind_riskscore` = NULL, `maxmind` = NULL, `verified` = NULL, ...) {
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
      if (!is.null(`maxmind_riskscore`)) {
        if (!(is.character(`maxmind_riskscore`) && length(`maxmind_riskscore`) == 1)) {
          stop(paste("Error! Invalid data for `maxmind_riskscore`. Must be a string:", `maxmind_riskscore`))
        }
        self$`maxmind_riskscore` <- `maxmind_riskscore`
      }
      if (!is.null(`maxmind`)) {
        stopifnot(R6::is.R6(`maxmind`))
        self$`maxmind` <- `maxmind`
      }
      if (!is.null(`verified`)) {
        if (!(is.logical(`verified`) && length(`verified`) == 1)) {
          stop(paste("Error! Invalid data for `verified`. Must be a boolean:", `verified`))
        }
        self$`verified` <- `verified`
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
    #' @return AccountInfoDataCc as a base R list.
    #' @examples
    #' # convert array of AccountInfoDataCc (x) to a data frame
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
    #' Convert AccountInfoDataCc to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoDataCcObject <- list()
      if (!is.null(self$`cc`)) {
        AccountInfoDataCcObject[["cc"]] <-
          self$`cc`
      }
      if (!is.null(self$`cc_exp`)) {
        AccountInfoDataCcObject[["cc_exp"]] <-
          self$`cc_exp`
      }
      if (!is.null(self$`name`)) {
        AccountInfoDataCcObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`address`)) {
        AccountInfoDataCcObject[["address"]] <-
          self$`address`
      }
      if (!is.null(self$`city`)) {
        AccountInfoDataCcObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`state`)) {
        AccountInfoDataCcObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`zip`)) {
        AccountInfoDataCcObject[["zip"]] <-
          self$`zip`
      }
      if (!is.null(self$`country`)) {
        AccountInfoDataCcObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`maxmind_riskscore`)) {
        AccountInfoDataCcObject[["maxmind_riskscore"]] <-
          self$`maxmind_riskscore`
      }
      if (!is.null(self$`maxmind`)) {
        AccountInfoDataCcObject[["maxmind"]] <-
          self$extractSimpleType(self$`maxmind`)
      }
      if (!is.null(self$`verified`)) {
        AccountInfoDataCcObject[["verified"]] <-
          self$`verified`
      }
      return(AccountInfoDataCcObject)
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
    #' Deserialize JSON string into an instance of AccountInfoDataCc
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataCc
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`cc`)) {
        self$`cc` <- this_object$`cc`
      }
      if (!is.null(this_object$`cc_exp`)) {
        self$`cc_exp` <- this_object$`cc_exp`
      }
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
      if (!is.null(this_object$`zip`)) {
        self$`zip` <- this_object$`zip`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`maxmind_riskscore`)) {
        self$`maxmind_riskscore` <- this_object$`maxmind_riskscore`
      }
      if (!is.null(this_object$`maxmind`)) {
        `maxmind_object` <- AccountInfoMaxMindResponse$new()
        `maxmind_object`$fromJSON(jsonlite::toJSON(this_object$`maxmind`, auto_unbox = TRUE, digits = NA))
        self$`maxmind` <- `maxmind_object`
      }
      if (!is.null(this_object$`verified`)) {
        self$`verified` <- this_object$`verified`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoDataCc in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataCc
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataCc
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`cc` <- this_object$`cc`
      self$`cc_exp` <- this_object$`cc_exp`
      self$`name` <- this_object$`name`
      self$`address` <- this_object$`address`
      self$`city` <- this_object$`city`
      self$`state` <- this_object$`state`
      self$`zip` <- this_object$`zip`
      self$`country` <- this_object$`country`
      self$`maxmind_riskscore` <- this_object$`maxmind_riskscore`
      self$`maxmind` <- AccountInfoMaxMindResponse$new()$fromJSON(jsonlite::toJSON(this_object$`maxmind`, auto_unbox = TRUE, digits = NA))
      self$`verified` <- this_object$`verified`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoDataCc and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoDataCc
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
# AccountInfoDataCc$unlock()
#
## Below is an example to define the print function
# AccountInfoDataCc$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoDataCc$lock()

