(ns inter-server-management-api.specs.mail-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.mail-service-info :refer :all]
            [inter-server-management-api.specs.mail-client-link :refer :all]
            [inter-server-management-api.specs.mail-billing-details :refer :all]
            [inter-server-management-api.specs.mail-schema-extra-info-tables :refer :all]
            [inter-server-management-api.specs.mail-service-type :refer :all]
            )
  (:import (java.io File)))


(def mail-schema-data
  {
   (ds/req :serviceInfo) mail-service-info-spec
   (ds/req :client_links) (s/coll-of mail-client-link-spec)
   (ds/req :billingDetails) mail-billing-details-spec
   (ds/req :custCurrency) string?
   (ds/req :custCurrencySymbol) string?
   (ds/req :package) string?
   (ds/req :extraInfoTables) mail-schema-extra-info-tables-spec
   (ds/req :serviceType) mail-service-type-spec
   (ds/req :usage_count) string?
   (ds/opt :serviceExtra) (s/coll-of string?)
   })

(def mail-schema-spec
  (ds/spec
    {:name ::mail-schema
     :spec mail-schema-data}))
