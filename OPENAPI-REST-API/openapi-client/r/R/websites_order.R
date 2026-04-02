#' Create a new WebsitesOrder
#'
#' @description
#' Schema for the WebsitesOrder object
#'
#' @docType class
#' @title WebsitesOrder
#' @description WebsitesOrder Class
#' @format An \code{R6Class} generator object
#' @field step Step description character
#' @field website Website description character
#' @field period Period description integer
#' @field serviceOfferId Service offer ID description integer
#' @field packages  \link{WebsitesOrderPackages}
#' @field enableDomainRegistering Enable domain registering description character
#' @field jsonServices  \link{WebsitesOrderJsonServices}
#' @field jsonServiceOffers  \link{WebsitesOrderJsonServiceOffers}
#' @field serviceTypes  \link{WebsitesOrderServiceTypes}
#' @field serviceOffers  \link{WebsitesOrderServiceOffers}
#' @field packges  \link{WebsitesOrderPackges} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsitesOrder <- R6::R6Class(
  "WebsitesOrder",
  public = list(
    `step` = NULL,
    `website` = NULL,
    `period` = NULL,
    `serviceOfferId` = NULL,
    `packages` = NULL,
    `enableDomainRegistering` = NULL,
    `jsonServices` = NULL,
    `jsonServiceOffers` = NULL,
    `serviceTypes` = NULL,
    `serviceOffers` = NULL,
    `packges` = NULL,

    #' @description
    #' Initialize a new WebsitesOrder class.
    #'
    #' @param step Step description
    #' @param website Website description
    #' @param period Period description
    #' @param serviceOfferId Service offer ID description
    #' @param packages packages
    #' @param enableDomainRegistering Enable domain registering description
    #' @param jsonServices jsonServices
    #' @param jsonServiceOffers jsonServiceOffers
    #' @param serviceTypes serviceTypes
    #' @param serviceOffers serviceOffers
    #' @param packges packges
    #' @param ... Other optional arguments.
    initialize = function(`step`, `website`, `period`, `serviceOfferId`, `packages`, `enableDomainRegistering`, `jsonServices`, `jsonServiceOffers`, `serviceTypes`, `serviceOffers`, `packges` = NULL, ...) {
      if (!missing(`step`)) {
        if (!(is.character(`step`) && length(`step`) == 1)) {
          stop(paste("Error! Invalid data for `step`. Must be a string:", `step`))
        }
        self$`step` <- `step`
      }
      if (!missing(`website`)) {
        if (!(is.character(`website`) && length(`website`) == 1)) {
          stop(paste("Error! Invalid data for `website`. Must be a string:", `website`))
        }
        self$`website` <- `website`
      }
      if (!missing(`period`)) {
        if (!(is.numeric(`period`) && length(`period`) == 1)) {
          stop(paste("Error! Invalid data for `period`. Must be an integer:", `period`))
        }
        self$`period` <- `period`
      }
      if (!missing(`serviceOfferId`)) {
        if (!(is.numeric(`serviceOfferId`) && length(`serviceOfferId`) == 1)) {
          stop(paste("Error! Invalid data for `serviceOfferId`. Must be an integer:", `serviceOfferId`))
        }
        self$`serviceOfferId` <- `serviceOfferId`
      }
      if (!missing(`packages`)) {
        stopifnot(R6::is.R6(`packages`))
        self$`packages` <- `packages`
      }
      if (!missing(`enableDomainRegistering`)) {
        if (!(is.logical(`enableDomainRegistering`) && length(`enableDomainRegistering`) == 1)) {
          stop(paste("Error! Invalid data for `enableDomainRegistering`. Must be a boolean:", `enableDomainRegistering`))
        }
        self$`enableDomainRegistering` <- `enableDomainRegistering`
      }
      if (!missing(`jsonServices`)) {
        stopifnot(R6::is.R6(`jsonServices`))
        self$`jsonServices` <- `jsonServices`
      }
      if (!missing(`jsonServiceOffers`)) {
        stopifnot(R6::is.R6(`jsonServiceOffers`))
        self$`jsonServiceOffers` <- `jsonServiceOffers`
      }
      if (!missing(`serviceTypes`)) {
        stopifnot(R6::is.R6(`serviceTypes`))
        self$`serviceTypes` <- `serviceTypes`
      }
      if (!missing(`serviceOffers`)) {
        stopifnot(R6::is.R6(`serviceOffers`))
        self$`serviceOffers` <- `serviceOffers`
      }
      if (!is.null(`packges`)) {
        stopifnot(R6::is.R6(`packges`))
        self$`packges` <- `packges`
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
    #' @return WebsitesOrder as a base R list.
    #' @examples
    #' # convert array of WebsitesOrder (x) to a data frame
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
    #' Convert WebsitesOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsitesOrderObject <- list()
      if (!is.null(self$`step`)) {
        WebsitesOrderObject[["step"]] <-
          self$`step`
      }
      if (!is.null(self$`website`)) {
        WebsitesOrderObject[["website"]] <-
          self$`website`
      }
      if (!is.null(self$`period`)) {
        WebsitesOrderObject[["period"]] <-
          self$`period`
      }
      if (!is.null(self$`serviceOfferId`)) {
        WebsitesOrderObject[["serviceOfferId"]] <-
          self$`serviceOfferId`
      }
      if (!is.null(self$`packages`)) {
        WebsitesOrderObject[["packages"]] <-
          self$extractSimpleType(self$`packages`)
      }
      if (!is.null(self$`enableDomainRegistering`)) {
        WebsitesOrderObject[["enableDomainRegistering"]] <-
          self$`enableDomainRegistering`
      }
      if (!is.null(self$`jsonServices`)) {
        WebsitesOrderObject[["jsonServices"]] <-
          self$extractSimpleType(self$`jsonServices`)
      }
      if (!is.null(self$`jsonServiceOffers`)) {
        WebsitesOrderObject[["jsonServiceOffers"]] <-
          self$extractSimpleType(self$`jsonServiceOffers`)
      }
      if (!is.null(self$`serviceTypes`)) {
        WebsitesOrderObject[["serviceTypes"]] <-
          self$extractSimpleType(self$`serviceTypes`)
      }
      if (!is.null(self$`serviceOffers`)) {
        WebsitesOrderObject[["serviceOffers"]] <-
          self$extractSimpleType(self$`serviceOffers`)
      }
      if (!is.null(self$`packges`)) {
        WebsitesOrderObject[["packges"]] <-
          self$extractSimpleType(self$`packges`)
      }
      return(WebsitesOrderObject)
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
    #' Deserialize JSON string into an instance of WebsitesOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`step`)) {
        self$`step` <- this_object$`step`
      }
      if (!is.null(this_object$`website`)) {
        self$`website` <- this_object$`website`
      }
      if (!is.null(this_object$`period`)) {
        self$`period` <- this_object$`period`
      }
      if (!is.null(this_object$`serviceOfferId`)) {
        self$`serviceOfferId` <- this_object$`serviceOfferId`
      }
      if (!is.null(this_object$`packages`)) {
        `packages_object` <- WebsitesOrderPackages$new()
        `packages_object`$fromJSON(jsonlite::toJSON(this_object$`packages`, auto_unbox = TRUE, digits = NA))
        self$`packages` <- `packages_object`
      }
      if (!is.null(this_object$`enableDomainRegistering`)) {
        self$`enableDomainRegistering` <- this_object$`enableDomainRegistering`
      }
      if (!is.null(this_object$`jsonServices`)) {
        `jsonservices_object` <- WebsitesOrderJsonServices$new()
        `jsonservices_object`$fromJSON(jsonlite::toJSON(this_object$`jsonServices`, auto_unbox = TRUE, digits = NA))
        self$`jsonServices` <- `jsonservices_object`
      }
      if (!is.null(this_object$`jsonServiceOffers`)) {
        `jsonserviceoffers_object` <- WebsitesOrderJsonServiceOffers$new()
        `jsonserviceoffers_object`$fromJSON(jsonlite::toJSON(this_object$`jsonServiceOffers`, auto_unbox = TRUE, digits = NA))
        self$`jsonServiceOffers` <- `jsonserviceoffers_object`
      }
      if (!is.null(this_object$`serviceTypes`)) {
        `servicetypes_object` <- WebsitesOrderServiceTypes$new()
        `servicetypes_object`$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
        self$`serviceTypes` <- `servicetypes_object`
      }
      if (!is.null(this_object$`serviceOffers`)) {
        `serviceoffers_object` <- WebsitesOrderServiceOffers$new()
        `serviceoffers_object`$fromJSON(jsonlite::toJSON(this_object$`serviceOffers`, auto_unbox = TRUE, digits = NA))
        self$`serviceOffers` <- `serviceoffers_object`
      }
      if (!is.null(this_object$`packges`)) {
        `packges_object` <- WebsitesOrderPackges$new()
        `packges_object`$fromJSON(jsonlite::toJSON(this_object$`packges`, auto_unbox = TRUE, digits = NA))
        self$`packges` <- `packges_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsitesOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`step` <- this_object$`step`
      self$`website` <- this_object$`website`
      self$`period` <- this_object$`period`
      self$`serviceOfferId` <- this_object$`serviceOfferId`
      self$`packages` <- WebsitesOrderPackages$new()$fromJSON(jsonlite::toJSON(this_object$`packages`, auto_unbox = TRUE, digits = NA))
      self$`enableDomainRegistering` <- this_object$`enableDomainRegistering`
      self$`jsonServices` <- WebsitesOrderJsonServices$new()$fromJSON(jsonlite::toJSON(this_object$`jsonServices`, auto_unbox = TRUE, digits = NA))
      self$`jsonServiceOffers` <- WebsitesOrderJsonServiceOffers$new()$fromJSON(jsonlite::toJSON(this_object$`jsonServiceOffers`, auto_unbox = TRUE, digits = NA))
      self$`serviceTypes` <- WebsitesOrderServiceTypes$new()$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
      self$`serviceOffers` <- WebsitesOrderServiceOffers$new()$fromJSON(jsonlite::toJSON(this_object$`serviceOffers`, auto_unbox = TRUE, digits = NA))
      self$`packges` <- WebsitesOrderPackges$new()$fromJSON(jsonlite::toJSON(this_object$`packges`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsitesOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `step`
      if (!is.null(input_json$`step`)) {
        if (!(is.character(input_json$`step`) && length(input_json$`step`) == 1)) {
          stop(paste("Error! Invalid data for `step`. Must be a string:", input_json$`step`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `step` is missing."))
      }
      # check the required field `website`
      if (!is.null(input_json$`website`)) {
        if (!(is.character(input_json$`website`) && length(input_json$`website`) == 1)) {
          stop(paste("Error! Invalid data for `website`. Must be a string:", input_json$`website`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `website` is missing."))
      }
      # check the required field `period`
      if (!is.null(input_json$`period`)) {
        if (!(is.numeric(input_json$`period`) && length(input_json$`period`) == 1)) {
          stop(paste("Error! Invalid data for `period`. Must be an integer:", input_json$`period`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `period` is missing."))
      }
      # check the required field `serviceOfferId`
      if (!is.null(input_json$`serviceOfferId`)) {
        if (!(is.numeric(input_json$`serviceOfferId`) && length(input_json$`serviceOfferId`) == 1)) {
          stop(paste("Error! Invalid data for `serviceOfferId`. Must be an integer:", input_json$`serviceOfferId`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `serviceOfferId` is missing."))
      }
      # check the required field `packages`
      if (!is.null(input_json$`packages`)) {
        stopifnot(R6::is.R6(input_json$`packages`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `packages` is missing."))
      }
      # check the required field `enableDomainRegistering`
      if (!is.null(input_json$`enableDomainRegistering`)) {
        if (!(is.logical(input_json$`enableDomainRegistering`) && length(input_json$`enableDomainRegistering`) == 1)) {
          stop(paste("Error! Invalid data for `enableDomainRegistering`. Must be a boolean:", input_json$`enableDomainRegistering`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `enableDomainRegistering` is missing."))
      }
      # check the required field `jsonServices`
      if (!is.null(input_json$`jsonServices`)) {
        stopifnot(R6::is.R6(input_json$`jsonServices`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `jsonServices` is missing."))
      }
      # check the required field `jsonServiceOffers`
      if (!is.null(input_json$`jsonServiceOffers`)) {
        stopifnot(R6::is.R6(input_json$`jsonServiceOffers`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `jsonServiceOffers` is missing."))
      }
      # check the required field `serviceTypes`
      if (!is.null(input_json$`serviceTypes`)) {
        stopifnot(R6::is.R6(input_json$`serviceTypes`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `serviceTypes` is missing."))
      }
      # check the required field `serviceOffers`
      if (!is.null(input_json$`serviceOffers`)) {
        stopifnot(R6::is.R6(input_json$`serviceOffers`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrder: the required field `serviceOffers` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsitesOrder
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `step` is null
      if (is.null(self$`step`)) {
        return(FALSE)
      }

      # check if the required `website` is null
      if (is.null(self$`website`)) {
        return(FALSE)
      }

      # check if the required `period` is null
      if (is.null(self$`period`)) {
        return(FALSE)
      }

      # check if the required `serviceOfferId` is null
      if (is.null(self$`serviceOfferId`)) {
        return(FALSE)
      }

      # check if the required `packages` is null
      if (is.null(self$`packages`)) {
        return(FALSE)
      }

      # check if the required `enableDomainRegistering` is null
      if (is.null(self$`enableDomainRegistering`)) {
        return(FALSE)
      }

      # check if the required `jsonServices` is null
      if (is.null(self$`jsonServices`)) {
        return(FALSE)
      }

      # check if the required `jsonServiceOffers` is null
      if (is.null(self$`jsonServiceOffers`)) {
        return(FALSE)
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        return(FALSE)
      }

      # check if the required `serviceOffers` is null
      if (is.null(self$`serviceOffers`)) {
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
      # check if the required `step` is null
      if (is.null(self$`step`)) {
        invalid_fields["step"] <- "Non-nullable required field `step` cannot be null."
      }

      # check if the required `website` is null
      if (is.null(self$`website`)) {
        invalid_fields["website"] <- "Non-nullable required field `website` cannot be null."
      }

      # check if the required `period` is null
      if (is.null(self$`period`)) {
        invalid_fields["period"] <- "Non-nullable required field `period` cannot be null."
      }

      # check if the required `serviceOfferId` is null
      if (is.null(self$`serviceOfferId`)) {
        invalid_fields["serviceOfferId"] <- "Non-nullable required field `serviceOfferId` cannot be null."
      }

      # check if the required `packages` is null
      if (is.null(self$`packages`)) {
        invalid_fields["packages"] <- "Non-nullable required field `packages` cannot be null."
      }

      # check if the required `enableDomainRegistering` is null
      if (is.null(self$`enableDomainRegistering`)) {
        invalid_fields["enableDomainRegistering"] <- "Non-nullable required field `enableDomainRegistering` cannot be null."
      }

      # check if the required `jsonServices` is null
      if (is.null(self$`jsonServices`)) {
        invalid_fields["jsonServices"] <- "Non-nullable required field `jsonServices` cannot be null."
      }

      # check if the required `jsonServiceOffers` is null
      if (is.null(self$`jsonServiceOffers`)) {
        invalid_fields["jsonServiceOffers"] <- "Non-nullable required field `jsonServiceOffers` cannot be null."
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        invalid_fields["serviceTypes"] <- "Non-nullable required field `serviceTypes` cannot be null."
      }

      # check if the required `serviceOffers` is null
      if (is.null(self$`serviceOffers`)) {
        invalid_fields["serviceOffers"] <- "Non-nullable required field `serviceOffers` cannot be null."
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
# WebsitesOrder$unlock()
#
## Below is an example to define the print function
# WebsitesOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsitesOrder$lock()

