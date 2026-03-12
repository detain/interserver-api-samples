(ns inter-server-management-api.specs.license
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.license-service-info :refer :all]
            [inter-server-management-api.specs.license-client-link :refer :all]
            [inter-server-management-api.specs.license-billing-details :refer :all]
            [inter-server-management-api.specs.license-extra-info-tables :refer :all]
            [inter-server-management-api.specs.license-service-type :refer :all]
            )
  (:import (java.io File)))


(def license-data
  {
   (ds/req :serviceInfo) license-service-info-spec
   (ds/req :client_links) (s/coll-of license-client-link-spec)
   (ds/req :billingDetails) license-billing-details-spec
   (ds/req :custCurrency) string?
   (ds/req :custCurrencySymbol) string?
   (ds/req :package) string?
   (ds/req :serviceExtra) (s/coll-of string?)
   (ds/req :extraInfoTables) license-extra-info-tables-spec
   (ds/req :service_overview_extra) string?
   (ds/req :serviceType) license-service-type-spec
   (ds/req :license_key) string?
   })

(def license-spec
  (ds/spec
    {:name ::license
     :spec license-data}))
