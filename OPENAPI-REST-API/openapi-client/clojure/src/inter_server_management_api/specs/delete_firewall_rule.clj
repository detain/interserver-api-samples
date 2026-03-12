(ns inter-server-management-api.specs.delete-firewall-rule
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def delete-firewall-rule-data
  {
   (ds/req :rule_id) int?
   })

(def delete-firewall-rule-spec
  (ds/spec
    {:name ::delete-firewall-rule
     :spec delete-firewall-rule-data}))
