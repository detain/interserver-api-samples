(ns inter-server-management-api.specs.server
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-client-link :refer :all]
            [inter-server-management-api.specs.server-billing-details :refer :all]
            [inter-server-management-api.specs.server-locations :refer :all]
            [inter-server-management-api.specs.server-network-info :refer :all]
            [inter-server-management-api.specs.server-extra-info-tables :refer :all]
            [inter-server-management-api.specs.server-service-info :refer :all]
            )
  (:import (java.io File)))


(def server-data
  {
   (ds/req :ipmiAuth) boolean?
   (ds/req :client_links) (s/coll-of server-client-link-spec)
   (ds/req :billingDetails) server-billing-details-spec
   (ds/req :custCurrency) string?
   (ds/req :custCurrencySymbol) string?
   (ds/req :package) string?
   (ds/req :serviceExtra) (s/coll-of string?)
   (ds/req :locations) server-locations-spec
   (ds/req :networkInfo) server-network-info-spec
   (ds/req :extraInfoTables) server-extra-info-tables-spec
   (ds/req :serviceInfo) server-service-info-spec
   })

(def server-spec
  (ds/spec
    {:name ::server
     :spec server-data}))
