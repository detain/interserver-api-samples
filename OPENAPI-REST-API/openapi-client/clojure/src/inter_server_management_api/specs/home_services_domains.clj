(ns inter-server-management-api.specs.home-services-domains
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-domains-links :refer :all]
            )
  (:import (java.io File)))


(def home-services-domains-data
  {
   (ds/opt :links) home-services-domains-links-spec
   (ds/opt :count) int?
   })

(def home-services-domains-spec
  (ds/spec
    {:name ::home-services-domains
     :spec home-services-domains-data}))
