(ns inter-server-management-api.specs.create-firewall-rule
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-firewall-rule-data
  {
   (ds/req :protocol_id) int?
   (ds/req :xdp_action) int?
   (ds/opt :destination_port) int?
   (ds/opt :source_ip) string?
   (ds/opt :source_port) int?
   })

(def create-firewall-rule-spec
  (ds/spec
    {:name ::create-firewall-rule
     :spec create-firewall-rule-data}))
