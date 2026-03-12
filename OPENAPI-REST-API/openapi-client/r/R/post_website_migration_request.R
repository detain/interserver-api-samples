#' Create a new PostWebsiteMigrationRequest
#'
#' @description
#' PostWebsiteMigrationRequest Class
#'
#' @docType class
#' @title PostWebsiteMigrationRequest
#' @description PostWebsiteMigrationRequest Class
#' @format An \code{R6Class} generator object
#' @field custPortal URL of the customer's current hosting portal. character [optional]
#' @field regEmail Registered email address at the current host. character [optional]
#' @field password Password for the current hosting account. character [optional]
#' @field ctrlPanel URL of the current control panel. character [optional]
#' @field ftpUsername FTP username at the current host. character [optional]
#' @field ftpPassword FTP password at the current host. character [optional]
#' @field siteBusyMig Information about site traffic during migration. character [optional]
#' @field splReqMig Special requirements for the migration. character [optional]
#' @field domainReg Whether domain registration assistance is needed. character [optional]
#' @field dataMig Data migration timing preference. character [optional]
#' @field domainRegPortal Domain registrar portal URL. character [optional]
#' @field domainRegEmail Email for the domain registrar account. character [optional]
#' @field domainRegPassword Password for the domain registrar account. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PostWebsiteMigrationRequest <- R6::R6Class(
  "PostWebsiteMigrationRequest",
  public = list(
    `custPortal` = NULL,
    `regEmail` = NULL,
    `password` = NULL,
    `ctrlPanel` = NULL,
    `ftpUsername` = NULL,
    `ftpPassword` = NULL,
    `siteBusyMig` = NULL,
    `splReqMig` = NULL,
    `domainReg` = NULL,
    `dataMig` = NULL,
    `domainRegPortal` = NULL,
    `domainRegEmail` = NULL,
    `domainRegPassword` = NULL,

    #' @description
    #' Initialize a new PostWebsiteMigrationRequest class.
    #'
    #' @param custPortal URL of the customer's current hosting portal.
    #' @param regEmail Registered email address at the current host.
    #' @param password Password for the current hosting account.
    #' @param ctrlPanel URL of the current control panel.
    #' @param ftpUsername FTP username at the current host.
    #' @param ftpPassword FTP password at the current host.
    #' @param siteBusyMig Information about site traffic during migration.
    #' @param splReqMig Special requirements for the migration.
    #' @param domainReg Whether domain registration assistance is needed.
    #' @param dataMig Data migration timing preference.
    #' @param domainRegPortal Domain registrar portal URL.
    #' @param domainRegEmail Email for the domain registrar account.
    #' @param domainRegPassword Password for the domain registrar account.
    #' @param ... Other optional arguments.
    initialize = function(`custPortal` = NULL, `regEmail` = NULL, `password` = NULL, `ctrlPanel` = NULL, `ftpUsername` = NULL, `ftpPassword` = NULL, `siteBusyMig` = NULL, `splReqMig` = NULL, `domainReg` = NULL, `dataMig` = NULL, `domainRegPortal` = NULL, `domainRegEmail` = NULL, `domainRegPassword` = NULL, ...) {
      if (!is.null(`custPortal`)) {
        if (!(is.character(`custPortal`) && length(`custPortal`) == 1)) {
          stop(paste("Error! Invalid data for `custPortal`. Must be a string:", `custPortal`))
        }
        self$`custPortal` <- `custPortal`
      }
      if (!is.null(`regEmail`)) {
        if (!(is.character(`regEmail`) && length(`regEmail`) == 1)) {
          stop(paste("Error! Invalid data for `regEmail`. Must be a string:", `regEmail`))
        }
        self$`regEmail` <- `regEmail`
      }
      if (!is.null(`password`)) {
        if (!(is.character(`password`) && length(`password`) == 1)) {
          stop(paste("Error! Invalid data for `password`. Must be a string:", `password`))
        }
        self$`password` <- `password`
      }
      if (!is.null(`ctrlPanel`)) {
        if (!(is.character(`ctrlPanel`) && length(`ctrlPanel`) == 1)) {
          stop(paste("Error! Invalid data for `ctrlPanel`. Must be a string:", `ctrlPanel`))
        }
        self$`ctrlPanel` <- `ctrlPanel`
      }
      if (!is.null(`ftpUsername`)) {
        if (!(is.character(`ftpUsername`) && length(`ftpUsername`) == 1)) {
          stop(paste("Error! Invalid data for `ftpUsername`. Must be a string:", `ftpUsername`))
        }
        self$`ftpUsername` <- `ftpUsername`
      }
      if (!is.null(`ftpPassword`)) {
        if (!(is.character(`ftpPassword`) && length(`ftpPassword`) == 1)) {
          stop(paste("Error! Invalid data for `ftpPassword`. Must be a string:", `ftpPassword`))
        }
        self$`ftpPassword` <- `ftpPassword`
      }
      if (!is.null(`siteBusyMig`)) {
        if (!(is.character(`siteBusyMig`) && length(`siteBusyMig`) == 1)) {
          stop(paste("Error! Invalid data for `siteBusyMig`. Must be a string:", `siteBusyMig`))
        }
        self$`siteBusyMig` <- `siteBusyMig`
      }
      if (!is.null(`splReqMig`)) {
        if (!(is.character(`splReqMig`) && length(`splReqMig`) == 1)) {
          stop(paste("Error! Invalid data for `splReqMig`. Must be a string:", `splReqMig`))
        }
        self$`splReqMig` <- `splReqMig`
      }
      if (!is.null(`domainReg`)) {
        if (!(is.character(`domainReg`) && length(`domainReg`) == 1)) {
          stop(paste("Error! Invalid data for `domainReg`. Must be a string:", `domainReg`))
        }
        self$`domainReg` <- `domainReg`
      }
      if (!is.null(`dataMig`)) {
        if (!(is.character(`dataMig`) && length(`dataMig`) == 1)) {
          stop(paste("Error! Invalid data for `dataMig`. Must be a string:", `dataMig`))
        }
        self$`dataMig` <- `dataMig`
      }
      if (!is.null(`domainRegPortal`)) {
        if (!(is.character(`domainRegPortal`) && length(`domainRegPortal`) == 1)) {
          stop(paste("Error! Invalid data for `domainRegPortal`. Must be a string:", `domainRegPortal`))
        }
        self$`domainRegPortal` <- `domainRegPortal`
      }
      if (!is.null(`domainRegEmail`)) {
        if (!(is.character(`domainRegEmail`) && length(`domainRegEmail`) == 1)) {
          stop(paste("Error! Invalid data for `domainRegEmail`. Must be a string:", `domainRegEmail`))
        }
        self$`domainRegEmail` <- `domainRegEmail`
      }
      if (!is.null(`domainRegPassword`)) {
        if (!(is.character(`domainRegPassword`) && length(`domainRegPassword`) == 1)) {
          stop(paste("Error! Invalid data for `domainRegPassword`. Must be a string:", `domainRegPassword`))
        }
        self$`domainRegPassword` <- `domainRegPassword`
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
    #' @return PostWebsiteMigrationRequest as a base R list.
    #' @examples
    #' # convert array of PostWebsiteMigrationRequest (x) to a data frame
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
    #' Convert PostWebsiteMigrationRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PostWebsiteMigrationRequestObject <- list()
      if (!is.null(self$`custPortal`)) {
        PostWebsiteMigrationRequestObject[["custPortal"]] <-
          self$`custPortal`
      }
      if (!is.null(self$`regEmail`)) {
        PostWebsiteMigrationRequestObject[["regEmail"]] <-
          self$`regEmail`
      }
      if (!is.null(self$`password`)) {
        PostWebsiteMigrationRequestObject[["password"]] <-
          self$`password`
      }
      if (!is.null(self$`ctrlPanel`)) {
        PostWebsiteMigrationRequestObject[["ctrlPanel"]] <-
          self$`ctrlPanel`
      }
      if (!is.null(self$`ftpUsername`)) {
        PostWebsiteMigrationRequestObject[["ftpUsername"]] <-
          self$`ftpUsername`
      }
      if (!is.null(self$`ftpPassword`)) {
        PostWebsiteMigrationRequestObject[["ftpPassword"]] <-
          self$`ftpPassword`
      }
      if (!is.null(self$`siteBusyMig`)) {
        PostWebsiteMigrationRequestObject[["siteBusyMig"]] <-
          self$`siteBusyMig`
      }
      if (!is.null(self$`splReqMig`)) {
        PostWebsiteMigrationRequestObject[["splReqMig"]] <-
          self$`splReqMig`
      }
      if (!is.null(self$`domainReg`)) {
        PostWebsiteMigrationRequestObject[["domainReg"]] <-
          self$`domainReg`
      }
      if (!is.null(self$`dataMig`)) {
        PostWebsiteMigrationRequestObject[["dataMig"]] <-
          self$`dataMig`
      }
      if (!is.null(self$`domainRegPortal`)) {
        PostWebsiteMigrationRequestObject[["domainRegPortal"]] <-
          self$`domainRegPortal`
      }
      if (!is.null(self$`domainRegEmail`)) {
        PostWebsiteMigrationRequestObject[["domainRegEmail"]] <-
          self$`domainRegEmail`
      }
      if (!is.null(self$`domainRegPassword`)) {
        PostWebsiteMigrationRequestObject[["domainRegPassword"]] <-
          self$`domainRegPassword`
      }
      return(PostWebsiteMigrationRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteMigrationRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteMigrationRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`custPortal`)) {
        self$`custPortal` <- this_object$`custPortal`
      }
      if (!is.null(this_object$`regEmail`)) {
        self$`regEmail` <- this_object$`regEmail`
      }
      if (!is.null(this_object$`password`)) {
        self$`password` <- this_object$`password`
      }
      if (!is.null(this_object$`ctrlPanel`)) {
        self$`ctrlPanel` <- this_object$`ctrlPanel`
      }
      if (!is.null(this_object$`ftpUsername`)) {
        self$`ftpUsername` <- this_object$`ftpUsername`
      }
      if (!is.null(this_object$`ftpPassword`)) {
        self$`ftpPassword` <- this_object$`ftpPassword`
      }
      if (!is.null(this_object$`siteBusyMig`)) {
        self$`siteBusyMig` <- this_object$`siteBusyMig`
      }
      if (!is.null(this_object$`splReqMig`)) {
        self$`splReqMig` <- this_object$`splReqMig`
      }
      if (!is.null(this_object$`domainReg`)) {
        self$`domainReg` <- this_object$`domainReg`
      }
      if (!is.null(this_object$`dataMig`)) {
        self$`dataMig` <- this_object$`dataMig`
      }
      if (!is.null(this_object$`domainRegPortal`)) {
        self$`domainRegPortal` <- this_object$`domainRegPortal`
      }
      if (!is.null(this_object$`domainRegEmail`)) {
        self$`domainRegEmail` <- this_object$`domainRegEmail`
      }
      if (!is.null(this_object$`domainRegPassword`)) {
        self$`domainRegPassword` <- this_object$`domainRegPassword`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PostWebsiteMigrationRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PostWebsiteMigrationRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PostWebsiteMigrationRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`custPortal` <- this_object$`custPortal`
      self$`regEmail` <- this_object$`regEmail`
      self$`password` <- this_object$`password`
      self$`ctrlPanel` <- this_object$`ctrlPanel`
      self$`ftpUsername` <- this_object$`ftpUsername`
      self$`ftpPassword` <- this_object$`ftpPassword`
      self$`siteBusyMig` <- this_object$`siteBusyMig`
      self$`splReqMig` <- this_object$`splReqMig`
      self$`domainReg` <- this_object$`domainReg`
      self$`dataMig` <- this_object$`dataMig`
      self$`domainRegPortal` <- this_object$`domainRegPortal`
      self$`domainRegEmail` <- this_object$`domainRegEmail`
      self$`domainRegPassword` <- this_object$`domainRegPassword`
      self
    },

    #' @description
    #' Validate JSON input with respect to PostWebsiteMigrationRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PostWebsiteMigrationRequest
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
# PostWebsiteMigrationRequest$unlock()
#
## Below is an example to define the print function
# PostWebsiteMigrationRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PostWebsiteMigrationRequest$lock()

