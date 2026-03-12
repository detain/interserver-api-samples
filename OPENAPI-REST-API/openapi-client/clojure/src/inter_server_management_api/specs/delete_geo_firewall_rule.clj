(ns inter-server-management-api.specs.delete-geo-firewall-rule
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def delete-geo-firewall-rule-data
  {
   (ds/req :rule_id) int?
   })

(def delete-geo-firewall-rule-spec
  (ds/spec
    {:name ::delete-geo-firewall-rule
     :spec delete-geo-firewall-rule-data}))
