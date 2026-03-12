(ns inter-server-management-api.specs.create-geo-firewall-rule
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-geo-firewall-rule-data
  {
   (ds/req :xdp_action) int?
   (ds/opt :destination_port) int?
   (ds/opt :country_code) int?
   (ds/opt :asn) int?
   })

(def create-geo-firewall-rule-spec
  (ds/spec
    {:name ::create-geo-firewall-rule
     :spec create-geo-firewall-rule-data}))
