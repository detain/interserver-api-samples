(ns inter-server-management-api.specs.domain-lookup-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            [inter-server-management-api.specs. :refer :all]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def domain-lookup-response-data
  {
   (ds/opt :available) boolean?
   (ds/opt :premium) boolean?
   (ds/opt :website) boolean?
   (ds/opt :domain_service) boolean?
   (ds/opt :service) any?
   (ds/opt :whois_privacy) boolean?
   (ds/opt :new) string?
   (ds/opt :renewal) string?
   (ds/opt :transfer) string?
   (ds/opt :fields) any?
   (ds/opt :currencies) any?
   })

(def domain-lookup-response-spec
  (ds/spec
    {:name ::domain-lookup-response
     :spec domain-lookup-response-data}))
