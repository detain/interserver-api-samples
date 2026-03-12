(ns inter-server-management-api.specs.vps-traffic-data-section-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-traffic-data-data-section-response :refer :all]
            )
  (:import (java.io File)))


(def vps-traffic-data-section-response-data
  {
   (ds/req :name) string?
   (ds/req :data) (s/coll-of vps-traffic-data-data-section-response-spec)
   })

(def vps-traffic-data-section-response-spec
  (ds/spec
    {:name ::vps-traffic-data-section-response
     :spec vps-traffic-data-section-response-data}))
