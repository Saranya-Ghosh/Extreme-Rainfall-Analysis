'''import pandas as pd
import matplotlib.pyplot as plt

# Read the Excel file with clustered data
df = pd.read_excel("E:\Saranya\SRM Second year\Internships\imd\clustered_data_2.0.xlsx")

# Plot the data
plt.scatter(df['Longitude'], df['Latitude'], c=df['Cluster'])
plt.xlabel('Longitude')
plt.ylabel('Latitude')
plt.title('Clustered Data')
plt.colorbar(label='Cluster')
plt.show()'''

import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.colors import ListedColormap

# Read the Excel file with clustered data
df = pd.read_excel("E:\Saranya\Internships\imd\clustered_data_2.0.xlsx")

# Define custom colors for clusters
cluster_colors = ['yellow', 'purple', 'green', 'blue', 'red']

# Create a colormap using the custom colors
cmap = ListedColormap(cluster_colors)

# Plot the data
plt.scatter(df['Longitude'], df['Latitude'], c=df['Cluster'], cmap=cmap)
plt.xlabel('Longitude')
plt.ylabel('Latitude')
plt.title('Clustered Data')
plt.colorbar(label='Cluster')
plt.show()
