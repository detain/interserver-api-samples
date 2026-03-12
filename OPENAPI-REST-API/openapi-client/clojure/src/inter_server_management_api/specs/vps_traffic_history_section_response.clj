(ns inter-server-management-api.specs.vps-traffic-history-section-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-history-section-data-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-history-section-response-data
  {
   (ds/req :data) (s/coll-of vps-traffic-history-section-data-response-spec)
   (ds/req :times) (s/coll-of inst?)
   })

(def vps-traffic-history-section-response-spec
  (ds/spec
    {:name ::vps-traffic-history-section-response
     :spec vps-traffic-history-section-response-data}))
