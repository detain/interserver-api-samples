(ns inter-server-management-api.specs.affiliate-banner-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def affiliate-banner-row-data
  {
   (ds/opt :image) string?
   (ds/opt :width) string?
   (ds/opt :height) string?
   })

(def affiliate-banner-row-spec
  (ds/spec
    {:name ::affiliate-banner-row
     :spec affiliate-banner-row-data}))
