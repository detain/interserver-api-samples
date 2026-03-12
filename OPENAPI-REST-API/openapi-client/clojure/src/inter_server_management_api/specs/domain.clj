(ns inter-server-management-api.specs.domain
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-service-info :refer :all]
            [inter-server-management-api.specs.domain-service-type :refer :all]
            [inter-server-management-api.specs.domain-client-link :refer :all]
            [inter-server-management-api.specs.domain-billing-details :refer :all]
            [inter-server-management-api.specs.domain-billing-extra :refer :all]
            [inter-server-management-api.specs.backup-extra-info-tables :refer :all]
            [inter-server-management-api.specs.domain-service-type :refer :all]
            [inter-server-management-api.specs.domain-contact-details :refer :all]
            [inter-server-management-api.specs.domain-all-info :refer :all]
            )
  (:import (java.io File)))


(def domain-data
  {
   (ds/opt :serviceInfo) domain-service-info-spec
   (ds/opt :serviceTypes) (s/map-of string? domain-service-type-spec)
   (ds/opt :client_links) (s/coll-of domain-client-link-spec)
   (ds/opt :billingDetails) domain-billing-details-spec
   (ds/opt :custCurrency) string?
   (ds/opt :custCurrencySymbol) string?
   (ds/opt :serviceExtra) domain-billing-extra-spec
   (ds/opt :extraInfoTables) backup-extra-info-tables-spec
   (ds/opt :serviceType) domain-service-type-spec
   (ds/opt :contact_details) domain-contact-details-spec
   (ds/opt :pwarning) string?
   (ds/opt :transfer_info) string?
   (ds/opt :errors) boolean?
   (ds/opt :domain_logs) (s/coll-of string?)
   (ds/opt :allInfo) domain-all-info-spec
   (ds/opt :registrarStatus) string?
   (ds/opt :locked) string?
   (ds/opt :whoisPrivacy) string?
   (ds/opt :autoRenew) string?
   })

(def domain-spec
  (ds/spec
    {:name ::domain
     :spec domain-data}))
