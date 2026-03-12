#' Create a new AccountInfoMaxMindResponse
#'
#' @description
#' MaxMind fraud detection scoring data for a credit card transaction.
#'
#' @docType class
#' @title AccountInfoMaxMindResponse
#' @description AccountInfoMaxMindResponse Class
#' @format An \code{R6Class} generator object
#' @field distance  character [optional]
#' @field countryMatch  character [optional]
#' @field countryCode  character [optional]
#' @field freeMail  character [optional]
#' @field anonymousProxy  character [optional]
#' @field score  character [optional]
#' @field binMatch  character [optional]
#' @field binCountry  character [optional]
#' @field err  character [optional]
#' @field proxyScore  character [optional]
#' @field ip_region  character [optional]
#' @field ip_city  character [optional]
#' @field ip_latitude  character [optional]
#' @field ip_longitude  character [optional]
#' @field binName  character [optional]
#' @field ip_isp  character [optional]
#' @field ip_org  character [optional]
#' @field binNameMatch  character [optional]
#' @field binPhoneMatch  character [optional]
#' @field binPhone  character [optional]
#' @field custPhoneInBillingLoc  character [optional]
#' @field highRiskCountry  character [optional]
#' @field queriesRemaining  character [optional]
#' @field cityPostalMatch  character [optional]
#' @field shipCityPostalMatch  character [optional]
#' @field maxmindID  character [optional]
#' @field ip_asnum  character [optional]
#' @field ip_userType  character [optional]
#' @field ip_countryConf  character [optional]
#' @field ip_regionConf  character [optional]
#' @field ip_cityConf  character [optional]
#' @field ip_postalCode  character [optional]
#' @field ip_postalConf  character [optional]
#' @field ip_accuracyRadius  character [optional]
#' @field ip_netSpeedCell  character [optional]
#' @field ip_metroCode  character [optional]
#' @field ip_areaCode  character [optional]
#' @field ip_timeZone  character [optional]
#' @field ip_regionName  character [optional]
#' @field ip_domain  character [optional]
#' @field ip_countryName  character [optional]
#' @field ip_continentCode  character [optional]
#' @field ip_corporateProxy  character [optional]
#' @field carderEmail  character [optional]
#' @field highRiskUsername  character [optional]
#' @field highRiskPassword  character [optional]
#' @field riskScore  \link{AccountInfoMaxMindResponseRiskScore} [optional]
#' @field isTransProxy  character [optional]
#' @field prepaid  character [optional]
#' @field minfraud_version  character [optional]
#' @field service_level  character [optional]
#' @field explanation  character [optional]
#' @field female_name  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoMaxMindResponse <- R6::R6Class(
  "AccountInfoMaxMindResponse",
  public = list(
    `distance` = NULL,
    `countryMatch` = NULL,
    `countryCode` = NULL,
    `freeMail` = NULL,
    `anonymousProxy` = NULL,
    `score` = NULL,
    `binMatch` = NULL,
    `binCountry` = NULL,
    `err` = NULL,
    `proxyScore` = NULL,
    `ip_region` = NULL,
    `ip_city` = NULL,
    `ip_latitude` = NULL,
    `ip_longitude` = NULL,
    `binName` = NULL,
    `ip_isp` = NULL,
    `ip_org` = NULL,
    `binNameMatch` = NULL,
    `binPhoneMatch` = NULL,
    `binPhone` = NULL,
    `custPhoneInBillingLoc` = NULL,
    `highRiskCountry` = NULL,
    `queriesRemaining` = NULL,
    `cityPostalMatch` = NULL,
    `shipCityPostalMatch` = NULL,
    `maxmindID` = NULL,
    `ip_asnum` = NULL,
    `ip_userType` = NULL,
    `ip_countryConf` = NULL,
    `ip_regionConf` = NULL,
    `ip_cityConf` = NULL,
    `ip_postalCode` = NULL,
    `ip_postalConf` = NULL,
    `ip_accuracyRadius` = NULL,
    `ip_netSpeedCell` = NULL,
    `ip_metroCode` = NULL,
    `ip_areaCode` = NULL,
    `ip_timeZone` = NULL,
    `ip_regionName` = NULL,
    `ip_domain` = NULL,
    `ip_countryName` = NULL,
    `ip_continentCode` = NULL,
    `ip_corporateProxy` = NULL,
    `carderEmail` = NULL,
    `highRiskUsername` = NULL,
    `highRiskPassword` = NULL,
    `riskScore` = NULL,
    `isTransProxy` = NULL,
    `prepaid` = NULL,
    `minfraud_version` = NULL,
    `service_level` = NULL,
    `explanation` = NULL,
    `female_name` = NULL,

    #' @description
    #' Initialize a new AccountInfoMaxMindResponse class.
    #'
    #' @param distance distance
    #' @param countryMatch countryMatch
    #' @param countryCode countryCode
    #' @param freeMail freeMail
    #' @param anonymousProxy anonymousProxy
    #' @param score score
    #' @param binMatch binMatch
    #' @param binCountry binCountry
    #' @param err err
    #' @param proxyScore proxyScore
    #' @param ip_region ip_region
    #' @param ip_city ip_city
    #' @param ip_latitude ip_latitude
    #' @param ip_longitude ip_longitude
    #' @param binName binName
    #' @param ip_isp ip_isp
    #' @param ip_org ip_org
    #' @param binNameMatch binNameMatch
    #' @param binPhoneMatch binPhoneMatch
    #' @param binPhone binPhone
    #' @param custPhoneInBillingLoc custPhoneInBillingLoc
    #' @param highRiskCountry highRiskCountry
    #' @param queriesRemaining queriesRemaining
    #' @param cityPostalMatch cityPostalMatch
    #' @param shipCityPostalMatch shipCityPostalMatch
    #' @param maxmindID maxmindID
    #' @param ip_asnum ip_asnum
    #' @param ip_userType ip_userType
    #' @param ip_countryConf ip_countryConf
    #' @param ip_regionConf ip_regionConf
    #' @param ip_cityConf ip_cityConf
    #' @param ip_postalCode ip_postalCode
    #' @param ip_postalConf ip_postalConf
    #' @param ip_accuracyRadius ip_accuracyRadius
    #' @param ip_netSpeedCell ip_netSpeedCell
    #' @param ip_metroCode ip_metroCode
    #' @param ip_areaCode ip_areaCode
    #' @param ip_timeZone ip_timeZone
    #' @param ip_regionName ip_regionName
    #' @param ip_domain ip_domain
    #' @param ip_countryName ip_countryName
    #' @param ip_continentCode ip_continentCode
    #' @param ip_corporateProxy ip_corporateProxy
    #' @param carderEmail carderEmail
    #' @param highRiskUsername highRiskUsername
    #' @param highRiskPassword highRiskPassword
    #' @param riskScore riskScore
    #' @param isTransProxy isTransProxy
    #' @param prepaid prepaid
    #' @param minfraud_version minfraud_version
    #' @param service_level service_level
    #' @param explanation explanation
    #' @param female_name female_name
    #' @param ... Other optional arguments.
    initialize = function(`distance` = NULL, `countryMatch` = NULL, `countryCode` = NULL, `freeMail` = NULL, `anonymousProxy` = NULL, `score` = NULL, `binMatch` = NULL, `binCountry` = NULL, `err` = NULL, `proxyScore` = NULL, `ip_region` = NULL, `ip_city` = NULL, `ip_latitude` = NULL, `ip_longitude` = NULL, `binName` = NULL, `ip_isp` = NULL, `ip_org` = NULL, `binNameMatch` = NULL, `binPhoneMatch` = NULL, `binPhone` = NULL, `custPhoneInBillingLoc` = NULL, `highRiskCountry` = NULL, `queriesRemaining` = NULL, `cityPostalMatch` = NULL, `shipCityPostalMatch` = NULL, `maxmindID` = NULL, `ip_asnum` = NULL, `ip_userType` = NULL, `ip_countryConf` = NULL, `ip_regionConf` = NULL, `ip_cityConf` = NULL, `ip_postalCode` = NULL, `ip_postalConf` = NULL, `ip_accuracyRadius` = NULL, `ip_netSpeedCell` = NULL, `ip_metroCode` = NULL, `ip_areaCode` = NULL, `ip_timeZone` = NULL, `ip_regionName` = NULL, `ip_domain` = NULL, `ip_countryName` = NULL, `ip_continentCode` = NULL, `ip_corporateProxy` = NULL, `carderEmail` = NULL, `highRiskUsername` = NULL, `highRiskPassword` = NULL, `riskScore` = NULL, `isTransProxy` = NULL, `prepaid` = NULL, `minfraud_version` = NULL, `service_level` = NULL, `explanation` = NULL, `female_name` = NULL, ...) {
      if (!is.null(`distance`)) {
        if (!(is.character(`distance`) && length(`distance`) == 1)) {
          stop(paste("Error! Invalid data for `distance`. Must be a string:", `distance`))
        }
        self$`distance` <- `distance`
      }
      if (!is.null(`countryMatch`)) {
        if (!(is.character(`countryMatch`) && length(`countryMatch`) == 1)) {
          stop(paste("Error! Invalid data for `countryMatch`. Must be a string:", `countryMatch`))
        }
        self$`countryMatch` <- `countryMatch`
      }
      if (!is.null(`countryCode`)) {
        if (!(is.character(`countryCode`) && length(`countryCode`) == 1)) {
          stop(paste("Error! Invalid data for `countryCode`. Must be a string:", `countryCode`))
        }
        self$`countryCode` <- `countryCode`
      }
      if (!is.null(`freeMail`)) {
        if (!(is.character(`freeMail`) && length(`freeMail`) == 1)) {
          stop(paste("Error! Invalid data for `freeMail`. Must be a string:", `freeMail`))
        }
        self$`freeMail` <- `freeMail`
      }
      if (!is.null(`anonymousProxy`)) {
        if (!(is.character(`anonymousProxy`) && length(`anonymousProxy`) == 1)) {
          stop(paste("Error! Invalid data for `anonymousProxy`. Must be a string:", `anonymousProxy`))
        }
        self$`anonymousProxy` <- `anonymousProxy`
      }
      if (!is.null(`score`)) {
        if (!(is.character(`score`) && length(`score`) == 1)) {
          stop(paste("Error! Invalid data for `score`. Must be a string:", `score`))
        }
        self$`score` <- `score`
      }
      if (!is.null(`binMatch`)) {
        if (!(is.character(`binMatch`) && length(`binMatch`) == 1)) {
          stop(paste("Error! Invalid data for `binMatch`. Must be a string:", `binMatch`))
        }
        self$`binMatch` <- `binMatch`
      }
      if (!is.null(`binCountry`)) {
        if (!(is.character(`binCountry`) && length(`binCountry`) == 1)) {
          stop(paste("Error! Invalid data for `binCountry`. Must be a string:", `binCountry`))
        }
        self$`binCountry` <- `binCountry`
      }
      if (!is.null(`err`)) {
        if (!(is.character(`err`) && length(`err`) == 1)) {
          stop(paste("Error! Invalid data for `err`. Must be a string:", `err`))
        }
        self$`err` <- `err`
      }
      if (!is.null(`proxyScore`)) {
        if (!(is.character(`proxyScore`) && length(`proxyScore`) == 1)) {
          stop(paste("Error! Invalid data for `proxyScore`. Must be a string:", `proxyScore`))
        }
        self$`proxyScore` <- `proxyScore`
      }
      if (!is.null(`ip_region`)) {
        if (!(is.character(`ip_region`) && length(`ip_region`) == 1)) {
          stop(paste("Error! Invalid data for `ip_region`. Must be a string:", `ip_region`))
        }
        self$`ip_region` <- `ip_region`
      }
      if (!is.null(`ip_city`)) {
        if (!(is.character(`ip_city`) && length(`ip_city`) == 1)) {
          stop(paste("Error! Invalid data for `ip_city`. Must be a string:", `ip_city`))
        }
        self$`ip_city` <- `ip_city`
      }
      if (!is.null(`ip_latitude`)) {
        if (!(is.character(`ip_latitude`) && length(`ip_latitude`) == 1)) {
          stop(paste("Error! Invalid data for `ip_latitude`. Must be a string:", `ip_latitude`))
        }
        self$`ip_latitude` <- `ip_latitude`
      }
      if (!is.null(`ip_longitude`)) {
        if (!(is.character(`ip_longitude`) && length(`ip_longitude`) == 1)) {
          stop(paste("Error! Invalid data for `ip_longitude`. Must be a string:", `ip_longitude`))
        }
        self$`ip_longitude` <- `ip_longitude`
      }
      if (!is.null(`binName`)) {
        if (!(is.character(`binName`) && length(`binName`) == 1)) {
          stop(paste("Error! Invalid data for `binName`. Must be a string:", `binName`))
        }
        self$`binName` <- `binName`
      }
      if (!is.null(`ip_isp`)) {
        if (!(is.character(`ip_isp`) && length(`ip_isp`) == 1)) {
          stop(paste("Error! Invalid data for `ip_isp`. Must be a string:", `ip_isp`))
        }
        self$`ip_isp` <- `ip_isp`
      }
      if (!is.null(`ip_org`)) {
        if (!(is.character(`ip_org`) && length(`ip_org`) == 1)) {
          stop(paste("Error! Invalid data for `ip_org`. Must be a string:", `ip_org`))
        }
        self$`ip_org` <- `ip_org`
      }
      if (!is.null(`binNameMatch`)) {
        if (!(is.character(`binNameMatch`) && length(`binNameMatch`) == 1)) {
          stop(paste("Error! Invalid data for `binNameMatch`. Must be a string:", `binNameMatch`))
        }
        self$`binNameMatch` <- `binNameMatch`
      }
      if (!is.null(`binPhoneMatch`)) {
        if (!(is.character(`binPhoneMatch`) && length(`binPhoneMatch`) == 1)) {
          stop(paste("Error! Invalid data for `binPhoneMatch`. Must be a string:", `binPhoneMatch`))
        }
        self$`binPhoneMatch` <- `binPhoneMatch`
      }
      if (!is.null(`binPhone`)) {
        if (!(is.character(`binPhone`) && length(`binPhone`) == 1)) {
          stop(paste("Error! Invalid data for `binPhone`. Must be a string:", `binPhone`))
        }
        self$`binPhone` <- `binPhone`
      }
      if (!is.null(`custPhoneInBillingLoc`)) {
        if (!(is.character(`custPhoneInBillingLoc`) && length(`custPhoneInBillingLoc`) == 1)) {
          stop(paste("Error! Invalid data for `custPhoneInBillingLoc`. Must be a string:", `custPhoneInBillingLoc`))
        }
        self$`custPhoneInBillingLoc` <- `custPhoneInBillingLoc`
      }
      if (!is.null(`highRiskCountry`)) {
        if (!(is.character(`highRiskCountry`) && length(`highRiskCountry`) == 1)) {
          stop(paste("Error! Invalid data for `highRiskCountry`. Must be a string:", `highRiskCountry`))
        }
        self$`highRiskCountry` <- `highRiskCountry`
      }
      if (!is.null(`queriesRemaining`)) {
        if (!(is.character(`queriesRemaining`) && length(`queriesRemaining`) == 1)) {
          stop(paste("Error! Invalid data for `queriesRemaining`. Must be a string:", `queriesRemaining`))
        }
        self$`queriesRemaining` <- `queriesRemaining`
      }
      if (!is.null(`cityPostalMatch`)) {
        if (!(is.character(`cityPostalMatch`) && length(`cityPostalMatch`) == 1)) {
          stop(paste("Error! Invalid data for `cityPostalMatch`. Must be a string:", `cityPostalMatch`))
        }
        self$`cityPostalMatch` <- `cityPostalMatch`
      }
      if (!is.null(`shipCityPostalMatch`)) {
        if (!(is.character(`shipCityPostalMatch`) && length(`shipCityPostalMatch`) == 1)) {
          stop(paste("Error! Invalid data for `shipCityPostalMatch`. Must be a string:", `shipCityPostalMatch`))
        }
        self$`shipCityPostalMatch` <- `shipCityPostalMatch`
      }
      if (!is.null(`maxmindID`)) {
        if (!(is.character(`maxmindID`) && length(`maxmindID`) == 1)) {
          stop(paste("Error! Invalid data for `maxmindID`. Must be a string:", `maxmindID`))
        }
        self$`maxmindID` <- `maxmindID`
      }
      if (!is.null(`ip_asnum`)) {
        if (!(is.character(`ip_asnum`) && length(`ip_asnum`) == 1)) {
          stop(paste("Error! Invalid data for `ip_asnum`. Must be a string:", `ip_asnum`))
        }
        self$`ip_asnum` <- `ip_asnum`
      }
      if (!is.null(`ip_userType`)) {
        if (!(is.character(`ip_userType`) && length(`ip_userType`) == 1)) {
          stop(paste("Error! Invalid data for `ip_userType`. Must be a string:", `ip_userType`))
        }
        self$`ip_userType` <- `ip_userType`
      }
      if (!is.null(`ip_countryConf`)) {
        if (!(is.character(`ip_countryConf`) && length(`ip_countryConf`) == 1)) {
          stop(paste("Error! Invalid data for `ip_countryConf`. Must be a string:", `ip_countryConf`))
        }
        self$`ip_countryConf` <- `ip_countryConf`
      }
      if (!is.null(`ip_regionConf`)) {
        if (!(is.character(`ip_regionConf`) && length(`ip_regionConf`) == 1)) {
          stop(paste("Error! Invalid data for `ip_regionConf`. Must be a string:", `ip_regionConf`))
        }
        self$`ip_regionConf` <- `ip_regionConf`
      }
      if (!is.null(`ip_cityConf`)) {
        if (!(is.character(`ip_cityConf`) && length(`ip_cityConf`) == 1)) {
          stop(paste("Error! Invalid data for `ip_cityConf`. Must be a string:", `ip_cityConf`))
        }
        self$`ip_cityConf` <- `ip_cityConf`
      }
      if (!is.null(`ip_postalCode`)) {
        if (!(is.character(`ip_postalCode`) && length(`ip_postalCode`) == 1)) {
          stop(paste("Error! Invalid data for `ip_postalCode`. Must be a string:", `ip_postalCode`))
        }
        self$`ip_postalCode` <- `ip_postalCode`
      }
      if (!is.null(`ip_postalConf`)) {
        if (!(is.character(`ip_postalConf`) && length(`ip_postalConf`) == 1)) {
          stop(paste("Error! Invalid data for `ip_postalConf`. Must be a string:", `ip_postalConf`))
        }
        self$`ip_postalConf` <- `ip_postalConf`
      }
      if (!is.null(`ip_accuracyRadius`)) {
        if (!(is.character(`ip_accuracyRadius`) && length(`ip_accuracyRadius`) == 1)) {
          stop(paste("Error! Invalid data for `ip_accuracyRadius`. Must be a string:", `ip_accuracyRadius`))
        }
        self$`ip_accuracyRadius` <- `ip_accuracyRadius`
      }
      if (!is.null(`ip_netSpeedCell`)) {
        if (!(is.character(`ip_netSpeedCell`) && length(`ip_netSpeedCell`) == 1)) {
          stop(paste("Error! Invalid data for `ip_netSpeedCell`. Must be a string:", `ip_netSpeedCell`))
        }
        self$`ip_netSpeedCell` <- `ip_netSpeedCell`
      }
      if (!is.null(`ip_metroCode`)) {
        if (!(is.character(`ip_metroCode`) && length(`ip_metroCode`) == 1)) {
          stop(paste("Error! Invalid data for `ip_metroCode`. Must be a string:", `ip_metroCode`))
        }
        self$`ip_metroCode` <- `ip_metroCode`
      }
      if (!is.null(`ip_areaCode`)) {
        if (!(is.character(`ip_areaCode`) && length(`ip_areaCode`) == 1)) {
          stop(paste("Error! Invalid data for `ip_areaCode`. Must be a string:", `ip_areaCode`))
        }
        self$`ip_areaCode` <- `ip_areaCode`
      }
      if (!is.null(`ip_timeZone`)) {
        if (!(is.character(`ip_timeZone`) && length(`ip_timeZone`) == 1)) {
          stop(paste("Error! Invalid data for `ip_timeZone`. Must be a string:", `ip_timeZone`))
        }
        self$`ip_timeZone` <- `ip_timeZone`
      }
      if (!is.null(`ip_regionName`)) {
        if (!(is.character(`ip_regionName`) && length(`ip_regionName`) == 1)) {
          stop(paste("Error! Invalid data for `ip_regionName`. Must be a string:", `ip_regionName`))
        }
        self$`ip_regionName` <- `ip_regionName`
      }
      if (!is.null(`ip_domain`)) {
        if (!(is.character(`ip_domain`) && length(`ip_domain`) == 1)) {
          stop(paste("Error! Invalid data for `ip_domain`. Must be a string:", `ip_domain`))
        }
        self$`ip_domain` <- `ip_domain`
      }
      if (!is.null(`ip_countryName`)) {
        if (!(is.character(`ip_countryName`) && length(`ip_countryName`) == 1)) {
          stop(paste("Error! Invalid data for `ip_countryName`. Must be a string:", `ip_countryName`))
        }
        self$`ip_countryName` <- `ip_countryName`
      }
      if (!is.null(`ip_continentCode`)) {
        if (!(is.character(`ip_continentCode`) && length(`ip_continentCode`) == 1)) {
          stop(paste("Error! Invalid data for `ip_continentCode`. Must be a string:", `ip_continentCode`))
        }
        self$`ip_continentCode` <- `ip_continentCode`
      }
      if (!is.null(`ip_corporateProxy`)) {
        if (!(is.character(`ip_corporateProxy`) && length(`ip_corporateProxy`) == 1)) {
          stop(paste("Error! Invalid data for `ip_corporateProxy`. Must be a string:", `ip_corporateProxy`))
        }
        self$`ip_corporateProxy` <- `ip_corporateProxy`
      }
      if (!is.null(`carderEmail`)) {
        if (!(is.character(`carderEmail`) && length(`carderEmail`) == 1)) {
          stop(paste("Error! Invalid data for `carderEmail`. Must be a string:", `carderEmail`))
        }
        self$`carderEmail` <- `carderEmail`
      }
      if (!is.null(`highRiskUsername`)) {
        if (!(is.character(`highRiskUsername`) && length(`highRiskUsername`) == 1)) {
          stop(paste("Error! Invalid data for `highRiskUsername`. Must be a string:", `highRiskUsername`))
        }
        self$`highRiskUsername` <- `highRiskUsername`
      }
      if (!is.null(`highRiskPassword`)) {
        if (!(is.character(`highRiskPassword`) && length(`highRiskPassword`) == 1)) {
          stop(paste("Error! Invalid data for `highRiskPassword`. Must be a string:", `highRiskPassword`))
        }
        self$`highRiskPassword` <- `highRiskPassword`
      }
      if (!is.null(`riskScore`)) {
        stopifnot(R6::is.R6(`riskScore`))
        self$`riskScore` <- `riskScore`
      }
      if (!is.null(`isTransProxy`)) {
        if (!(is.character(`isTransProxy`) && length(`isTransProxy`) == 1)) {
          stop(paste("Error! Invalid data for `isTransProxy`. Must be a string:", `isTransProxy`))
        }
        self$`isTransProxy` <- `isTransProxy`
      }
      if (!is.null(`prepaid`)) {
        if (!(is.character(`prepaid`) && length(`prepaid`) == 1)) {
          stop(paste("Error! Invalid data for `prepaid`. Must be a string:", `prepaid`))
        }
        self$`prepaid` <- `prepaid`
      }
      if (!is.null(`minfraud_version`)) {
        if (!(is.character(`minfraud_version`) && length(`minfraud_version`) == 1)) {
          stop(paste("Error! Invalid data for `minfraud_version`. Must be a string:", `minfraud_version`))
        }
        self$`minfraud_version` <- `minfraud_version`
      }
      if (!is.null(`service_level`)) {
        if (!(is.character(`service_level`) && length(`service_level`) == 1)) {
          stop(paste("Error! Invalid data for `service_level`. Must be a string:", `service_level`))
        }
        self$`service_level` <- `service_level`
      }
      if (!is.null(`explanation`)) {
        if (!(is.character(`explanation`) && length(`explanation`) == 1)) {
          stop(paste("Error! Invalid data for `explanation`. Must be a string:", `explanation`))
        }
        self$`explanation` <- `explanation`
      }
      if (!is.null(`female_name`)) {
        if (!(is.character(`female_name`) && length(`female_name`) == 1)) {
          stop(paste("Error! Invalid data for `female_name`. Must be a string:", `female_name`))
        }
        self$`female_name` <- `female_name`
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
    #' @return AccountInfoMaxMindResponse as a base R list.
    #' @examples
    #' # convert array of AccountInfoMaxMindResponse (x) to a data frame
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
    #' Convert AccountInfoMaxMindResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoMaxMindResponseObject <- list()
      if (!is.null(self$`distance`)) {
        AccountInfoMaxMindResponseObject[["distance"]] <-
          self$`distance`
      }
      if (!is.null(self$`countryMatch`)) {
        AccountInfoMaxMindResponseObject[["countryMatch"]] <-
          self$`countryMatch`
      }
      if (!is.null(self$`countryCode`)) {
        AccountInfoMaxMindResponseObject[["countryCode"]] <-
          self$`countryCode`
      }
      if (!is.null(self$`freeMail`)) {
        AccountInfoMaxMindResponseObject[["freeMail"]] <-
          self$`freeMail`
      }
      if (!is.null(self$`anonymousProxy`)) {
        AccountInfoMaxMindResponseObject[["anonymousProxy"]] <-
          self$`anonymousProxy`
      }
      if (!is.null(self$`score`)) {
        AccountInfoMaxMindResponseObject[["score"]] <-
          self$`score`
      }
      if (!is.null(self$`binMatch`)) {
        AccountInfoMaxMindResponseObject[["binMatch"]] <-
          self$`binMatch`
      }
      if (!is.null(self$`binCountry`)) {
        AccountInfoMaxMindResponseObject[["binCountry"]] <-
          self$`binCountry`
      }
      if (!is.null(self$`err`)) {
        AccountInfoMaxMindResponseObject[["err"]] <-
          self$`err`
      }
      if (!is.null(self$`proxyScore`)) {
        AccountInfoMaxMindResponseObject[["proxyScore"]] <-
          self$`proxyScore`
      }
      if (!is.null(self$`ip_region`)) {
        AccountInfoMaxMindResponseObject[["ip_region"]] <-
          self$`ip_region`
      }
      if (!is.null(self$`ip_city`)) {
        AccountInfoMaxMindResponseObject[["ip_city"]] <-
          self$`ip_city`
      }
      if (!is.null(self$`ip_latitude`)) {
        AccountInfoMaxMindResponseObject[["ip_latitude"]] <-
          self$`ip_latitude`
      }
      if (!is.null(self$`ip_longitude`)) {
        AccountInfoMaxMindResponseObject[["ip_longitude"]] <-
          self$`ip_longitude`
      }
      if (!is.null(self$`binName`)) {
        AccountInfoMaxMindResponseObject[["binName"]] <-
          self$`binName`
      }
      if (!is.null(self$`ip_isp`)) {
        AccountInfoMaxMindResponseObject[["ip_isp"]] <-
          self$`ip_isp`
      }
      if (!is.null(self$`ip_org`)) {
        AccountInfoMaxMindResponseObject[["ip_org"]] <-
          self$`ip_org`
      }
      if (!is.null(self$`binNameMatch`)) {
        AccountInfoMaxMindResponseObject[["binNameMatch"]] <-
          self$`binNameMatch`
      }
      if (!is.null(self$`binPhoneMatch`)) {
        AccountInfoMaxMindResponseObject[["binPhoneMatch"]] <-
          self$`binPhoneMatch`
      }
      if (!is.null(self$`binPhone`)) {
        AccountInfoMaxMindResponseObject[["binPhone"]] <-
          self$`binPhone`
      }
      if (!is.null(self$`custPhoneInBillingLoc`)) {
        AccountInfoMaxMindResponseObject[["custPhoneInBillingLoc"]] <-
          self$`custPhoneInBillingLoc`
      }
      if (!is.null(self$`highRiskCountry`)) {
        AccountInfoMaxMindResponseObject[["highRiskCountry"]] <-
          self$`highRiskCountry`
      }
      if (!is.null(self$`queriesRemaining`)) {
        AccountInfoMaxMindResponseObject[["queriesRemaining"]] <-
          self$`queriesRemaining`
      }
      if (!is.null(self$`cityPostalMatch`)) {
        AccountInfoMaxMindResponseObject[["cityPostalMatch"]] <-
          self$`cityPostalMatch`
      }
      if (!is.null(self$`shipCityPostalMatch`)) {
        AccountInfoMaxMindResponseObject[["shipCityPostalMatch"]] <-
          self$`shipCityPostalMatch`
      }
      if (!is.null(self$`maxmindID`)) {
        AccountInfoMaxMindResponseObject[["maxmindID"]] <-
          self$`maxmindID`
      }
      if (!is.null(self$`ip_asnum`)) {
        AccountInfoMaxMindResponseObject[["ip_asnum"]] <-
          self$`ip_asnum`
      }
      if (!is.null(self$`ip_userType`)) {
        AccountInfoMaxMindResponseObject[["ip_userType"]] <-
          self$`ip_userType`
      }
      if (!is.null(self$`ip_countryConf`)) {
        AccountInfoMaxMindResponseObject[["ip_countryConf"]] <-
          self$`ip_countryConf`
      }
      if (!is.null(self$`ip_regionConf`)) {
        AccountInfoMaxMindResponseObject[["ip_regionConf"]] <-
          self$`ip_regionConf`
      }
      if (!is.null(self$`ip_cityConf`)) {
        AccountInfoMaxMindResponseObject[["ip_cityConf"]] <-
          self$`ip_cityConf`
      }
      if (!is.null(self$`ip_postalCode`)) {
        AccountInfoMaxMindResponseObject[["ip_postalCode"]] <-
          self$`ip_postalCode`
      }
      if (!is.null(self$`ip_postalConf`)) {
        AccountInfoMaxMindResponseObject[["ip_postalConf"]] <-
          self$`ip_postalConf`
      }
      if (!is.null(self$`ip_accuracyRadius`)) {
        AccountInfoMaxMindResponseObject[["ip_accuracyRadius"]] <-
          self$`ip_accuracyRadius`
      }
      if (!is.null(self$`ip_netSpeedCell`)) {
        AccountInfoMaxMindResponseObject[["ip_netSpeedCell"]] <-
          self$`ip_netSpeedCell`
      }
      if (!is.null(self$`ip_metroCode`)) {
        AccountInfoMaxMindResponseObject[["ip_metroCode"]] <-
          self$`ip_metroCode`
      }
      if (!is.null(self$`ip_areaCode`)) {
        AccountInfoMaxMindResponseObject[["ip_areaCode"]] <-
          self$`ip_areaCode`
      }
      if (!is.null(self$`ip_timeZone`)) {
        AccountInfoMaxMindResponseObject[["ip_timeZone"]] <-
          self$`ip_timeZone`
      }
      if (!is.null(self$`ip_regionName`)) {
        AccountInfoMaxMindResponseObject[["ip_regionName"]] <-
          self$`ip_regionName`
      }
      if (!is.null(self$`ip_domain`)) {
        AccountInfoMaxMindResponseObject[["ip_domain"]] <-
          self$`ip_domain`
      }
      if (!is.null(self$`ip_countryName`)) {
        AccountInfoMaxMindResponseObject[["ip_countryName"]] <-
          self$`ip_countryName`
      }
      if (!is.null(self$`ip_continentCode`)) {
        AccountInfoMaxMindResponseObject[["ip_continentCode"]] <-
          self$`ip_continentCode`
      }
      if (!is.null(self$`ip_corporateProxy`)) {
        AccountInfoMaxMindResponseObject[["ip_corporateProxy"]] <-
          self$`ip_corporateProxy`
      }
      if (!is.null(self$`carderEmail`)) {
        AccountInfoMaxMindResponseObject[["carderEmail"]] <-
          self$`carderEmail`
      }
      if (!is.null(self$`highRiskUsername`)) {
        AccountInfoMaxMindResponseObject[["highRiskUsername"]] <-
          self$`highRiskUsername`
      }
      if (!is.null(self$`highRiskPassword`)) {
        AccountInfoMaxMindResponseObject[["highRiskPassword"]] <-
          self$`highRiskPassword`
      }
      if (!is.null(self$`riskScore`)) {
        AccountInfoMaxMindResponseObject[["riskScore"]] <-
          self$extractSimpleType(self$`riskScore`)
      }
      if (!is.null(self$`isTransProxy`)) {
        AccountInfoMaxMindResponseObject[["isTransProxy"]] <-
          self$`isTransProxy`
      }
      if (!is.null(self$`prepaid`)) {
        AccountInfoMaxMindResponseObject[["prepaid"]] <-
          self$`prepaid`
      }
      if (!is.null(self$`minfraud_version`)) {
        AccountInfoMaxMindResponseObject[["minfraud_version"]] <-
          self$`minfraud_version`
      }
      if (!is.null(self$`service_level`)) {
        AccountInfoMaxMindResponseObject[["service_level"]] <-
          self$`service_level`
      }
      if (!is.null(self$`explanation`)) {
        AccountInfoMaxMindResponseObject[["explanation"]] <-
          self$`explanation`
      }
      if (!is.null(self$`female_name`)) {
        AccountInfoMaxMindResponseObject[["female_name"]] <-
          self$`female_name`
      }
      return(AccountInfoMaxMindResponseObject)
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
    #' Deserialize JSON string into an instance of AccountInfoMaxMindResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoMaxMindResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`distance`)) {
        self$`distance` <- this_object$`distance`
      }
      if (!is.null(this_object$`countryMatch`)) {
        self$`countryMatch` <- this_object$`countryMatch`
      }
      if (!is.null(this_object$`countryCode`)) {
        self$`countryCode` <- this_object$`countryCode`
      }
      if (!is.null(this_object$`freeMail`)) {
        self$`freeMail` <- this_object$`freeMail`
      }
      if (!is.null(this_object$`anonymousProxy`)) {
        self$`anonymousProxy` <- this_object$`anonymousProxy`
      }
      if (!is.null(this_object$`score`)) {
        self$`score` <- this_object$`score`
      }
      if (!is.null(this_object$`binMatch`)) {
        self$`binMatch` <- this_object$`binMatch`
      }
      if (!is.null(this_object$`binCountry`)) {
        self$`binCountry` <- this_object$`binCountry`
      }
      if (!is.null(this_object$`err`)) {
        self$`err` <- this_object$`err`
      }
      if (!is.null(this_object$`proxyScore`)) {
        self$`proxyScore` <- this_object$`proxyScore`
      }
      if (!is.null(this_object$`ip_region`)) {
        self$`ip_region` <- this_object$`ip_region`
      }
      if (!is.null(this_object$`ip_city`)) {
        self$`ip_city` <- this_object$`ip_city`
      }
      if (!is.null(this_object$`ip_latitude`)) {
        self$`ip_latitude` <- this_object$`ip_latitude`
      }
      if (!is.null(this_object$`ip_longitude`)) {
        self$`ip_longitude` <- this_object$`ip_longitude`
      }
      if (!is.null(this_object$`binName`)) {
        self$`binName` <- this_object$`binName`
      }
      if (!is.null(this_object$`ip_isp`)) {
        self$`ip_isp` <- this_object$`ip_isp`
      }
      if (!is.null(this_object$`ip_org`)) {
        self$`ip_org` <- this_object$`ip_org`
      }
      if (!is.null(this_object$`binNameMatch`)) {
        self$`binNameMatch` <- this_object$`binNameMatch`
      }
      if (!is.null(this_object$`binPhoneMatch`)) {
        self$`binPhoneMatch` <- this_object$`binPhoneMatch`
      }
      if (!is.null(this_object$`binPhone`)) {
        self$`binPhone` <- this_object$`binPhone`
      }
      if (!is.null(this_object$`custPhoneInBillingLoc`)) {
        self$`custPhoneInBillingLoc` <- this_object$`custPhoneInBillingLoc`
      }
      if (!is.null(this_object$`highRiskCountry`)) {
        self$`highRiskCountry` <- this_object$`highRiskCountry`
      }
      if (!is.null(this_object$`queriesRemaining`)) {
        self$`queriesRemaining` <- this_object$`queriesRemaining`
      }
      if (!is.null(this_object$`cityPostalMatch`)) {
        self$`cityPostalMatch` <- this_object$`cityPostalMatch`
      }
      if (!is.null(this_object$`shipCityPostalMatch`)) {
        self$`shipCityPostalMatch` <- this_object$`shipCityPostalMatch`
      }
      if (!is.null(this_object$`maxmindID`)) {
        self$`maxmindID` <- this_object$`maxmindID`
      }
      if (!is.null(this_object$`ip_asnum`)) {
        self$`ip_asnum` <- this_object$`ip_asnum`
      }
      if (!is.null(this_object$`ip_userType`)) {
        self$`ip_userType` <- this_object$`ip_userType`
      }
      if (!is.null(this_object$`ip_countryConf`)) {
        self$`ip_countryConf` <- this_object$`ip_countryConf`
      }
      if (!is.null(this_object$`ip_regionConf`)) {
        self$`ip_regionConf` <- this_object$`ip_regionConf`
      }
      if (!is.null(this_object$`ip_cityConf`)) {
        self$`ip_cityConf` <- this_object$`ip_cityConf`
      }
      if (!is.null(this_object$`ip_postalCode`)) {
        self$`ip_postalCode` <- this_object$`ip_postalCode`
      }
      if (!is.null(this_object$`ip_postalConf`)) {
        self$`ip_postalConf` <- this_object$`ip_postalConf`
      }
      if (!is.null(this_object$`ip_accuracyRadius`)) {
        self$`ip_accuracyRadius` <- this_object$`ip_accuracyRadius`
      }
      if (!is.null(this_object$`ip_netSpeedCell`)) {
        self$`ip_netSpeedCell` <- this_object$`ip_netSpeedCell`
      }
      if (!is.null(this_object$`ip_metroCode`)) {
        self$`ip_metroCode` <- this_object$`ip_metroCode`
      }
      if (!is.null(this_object$`ip_areaCode`)) {
        self$`ip_areaCode` <- this_object$`ip_areaCode`
      }
      if (!is.null(this_object$`ip_timeZone`)) {
        self$`ip_timeZone` <- this_object$`ip_timeZone`
      }
      if (!is.null(this_object$`ip_regionName`)) {
        self$`ip_regionName` <- this_object$`ip_regionName`
      }
      if (!is.null(this_object$`ip_domain`)) {
        self$`ip_domain` <- this_object$`ip_domain`
      }
      if (!is.null(this_object$`ip_countryName`)) {
        self$`ip_countryName` <- this_object$`ip_countryName`
      }
      if (!is.null(this_object$`ip_continentCode`)) {
        self$`ip_continentCode` <- this_object$`ip_continentCode`
      }
      if (!is.null(this_object$`ip_corporateProxy`)) {
        self$`ip_corporateProxy` <- this_object$`ip_corporateProxy`
      }
      if (!is.null(this_object$`carderEmail`)) {
        self$`carderEmail` <- this_object$`carderEmail`
      }
      if (!is.null(this_object$`highRiskUsername`)) {
        self$`highRiskUsername` <- this_object$`highRiskUsername`
      }
      if (!is.null(this_object$`highRiskPassword`)) {
        self$`highRiskPassword` <- this_object$`highRiskPassword`
      }
      if (!is.null(this_object$`riskScore`)) {
        `riskscore_object` <- AccountInfoMaxMindResponseRiskScore$new()
        `riskscore_object`$fromJSON(jsonlite::toJSON(this_object$`riskScore`, auto_unbox = TRUE, digits = NA))
        self$`riskScore` <- `riskscore_object`
      }
      if (!is.null(this_object$`isTransProxy`)) {
        self$`isTransProxy` <- this_object$`isTransProxy`
      }
      if (!is.null(this_object$`prepaid`)) {
        self$`prepaid` <- this_object$`prepaid`
      }
      if (!is.null(this_object$`minfraud_version`)) {
        self$`minfraud_version` <- this_object$`minfraud_version`
      }
      if (!is.null(this_object$`service_level`)) {
        self$`service_level` <- this_object$`service_level`
      }
      if (!is.null(this_object$`explanation`)) {
        self$`explanation` <- this_object$`explanation`
      }
      if (!is.null(this_object$`female_name`)) {
        self$`female_name` <- this_object$`female_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoMaxMindResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoMaxMindResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoMaxMindResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`distance` <- this_object$`distance`
      self$`countryMatch` <- this_object$`countryMatch`
      self$`countryCode` <- this_object$`countryCode`
      self$`freeMail` <- this_object$`freeMail`
      self$`anonymousProxy` <- this_object$`anonymousProxy`
      self$`score` <- this_object$`score`
      self$`binMatch` <- this_object$`binMatch`
      self$`binCountry` <- this_object$`binCountry`
      self$`err` <- this_object$`err`
      self$`proxyScore` <- this_object$`proxyScore`
      self$`ip_region` <- this_object$`ip_region`
      self$`ip_city` <- this_object$`ip_city`
      self$`ip_latitude` <- this_object$`ip_latitude`
      self$`ip_longitude` <- this_object$`ip_longitude`
      self$`binName` <- this_object$`binName`
      self$`ip_isp` <- this_object$`ip_isp`
      self$`ip_org` <- this_object$`ip_org`
      self$`binNameMatch` <- this_object$`binNameMatch`
      self$`binPhoneMatch` <- this_object$`binPhoneMatch`
      self$`binPhone` <- this_object$`binPhone`
      self$`custPhoneInBillingLoc` <- this_object$`custPhoneInBillingLoc`
      self$`highRiskCountry` <- this_object$`highRiskCountry`
      self$`queriesRemaining` <- this_object$`queriesRemaining`
      self$`cityPostalMatch` <- this_object$`cityPostalMatch`
      self$`shipCityPostalMatch` <- this_object$`shipCityPostalMatch`
      self$`maxmindID` <- this_object$`maxmindID`
      self$`ip_asnum` <- this_object$`ip_asnum`
      self$`ip_userType` <- this_object$`ip_userType`
      self$`ip_countryConf` <- this_object$`ip_countryConf`
      self$`ip_regionConf` <- this_object$`ip_regionConf`
      self$`ip_cityConf` <- this_object$`ip_cityConf`
      self$`ip_postalCode` <- this_object$`ip_postalCode`
      self$`ip_postalConf` <- this_object$`ip_postalConf`
      self$`ip_accuracyRadius` <- this_object$`ip_accuracyRadius`
      self$`ip_netSpeedCell` <- this_object$`ip_netSpeedCell`
      self$`ip_metroCode` <- this_object$`ip_metroCode`
      self$`ip_areaCode` <- this_object$`ip_areaCode`
      self$`ip_timeZone` <- this_object$`ip_timeZone`
      self$`ip_regionName` <- this_object$`ip_regionName`
      self$`ip_domain` <- this_object$`ip_domain`
      self$`ip_countryName` <- this_object$`ip_countryName`
      self$`ip_continentCode` <- this_object$`ip_continentCode`
      self$`ip_corporateProxy` <- this_object$`ip_corporateProxy`
      self$`carderEmail` <- this_object$`carderEmail`
      self$`highRiskUsername` <- this_object$`highRiskUsername`
      self$`highRiskPassword` <- this_object$`highRiskPassword`
      self$`riskScore` <- AccountInfoMaxMindResponseRiskScore$new()$fromJSON(jsonlite::toJSON(this_object$`riskScore`, auto_unbox = TRUE, digits = NA))
      self$`isTransProxy` <- this_object$`isTransProxy`
      self$`prepaid` <- this_object$`prepaid`
      self$`minfraud_version` <- this_object$`minfraud_version`
      self$`service_level` <- this_object$`service_level`
      self$`explanation` <- this_object$`explanation`
      self$`female_name` <- this_object$`female_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoMaxMindResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoMaxMindResponse
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
# AccountInfoMaxMindResponse$unlock()
#
## Below is an example to define the print function
# AccountInfoMaxMindResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoMaxMindResponse$lock()

